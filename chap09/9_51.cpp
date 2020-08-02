#include <vector>
#include <string>
#include <iostream>

using std::vector;
using std::string;
using std::cout;

class Date {
public:
    static vector<string> months;
    static vector<string> shortMonths;
    Date(): year(0), month(0), day(0) { }
    Date(int y, int m, int d): year(y), month(m), day(d) { }
    Date(const string &);
    void print();
private:
    unsigned year, month, day;
};

vector<string> Date::months = {"", "January", "Febuary", "March", "April", "May", "June",
                               "July", "August", "September", "October", "November", "December"};
vector<string> Date::shortMonths = {"", "Jan", "Feb", "Mar", "Apr", "May", "Jun",
                                    "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};

Date::Date(const string &s)
{
    // cases like 1/1/1900
    if (s.find("/") != string::npos) {
        string::size_type prevPos = 0, pos = 0;
        pos = s.find("/", pos);
        month = std::stoi(s.substr(prevPos, pos));
        prevPos = ++pos;
        pos = s.find("/", pos);
        day = std::stoi(s.substr(prevPos, pos));
        prevPos = ++pos;
        year = std::stoi(s.substr(prevPos));
        return;
    }

    // cases like January 1, 1900 or Jan 1, 1900

    // handle full month name first
    for (vector<string>::size_type ix = 1; ix != Date::months.size(); ++ix) {
        if (s.find(Date::months[ix]) != string::npos) {
            month = ix;
            string::size_type sizeMonthName = Date::months[ix].size();
            auto pos = s.find(",", Date::months[ix].size());
            day = std::stoi(s.substr(sizeMonthName+1, pos-(sizeMonthName+1)));
            year = std::stoi(s.substr(pos+1));
            return;
        }
    }

    // handle short month name after handling full month name
    for (vector<string>::size_type ix = 1; ix != Date::shortMonths.size(); ++ix) {
        if (s.find(Date::shortMonths[ix]) != string::npos) {
            month = ix;
            auto pos = s.find(",", 3);  // every short month name is of size 3
            day = std::stoi(s.substr(4, pos - 4));
            year = std::stoi(s.substr(pos+1));
            return;
        }
    }
}

void Date::print()
{
    cout << month << "/" << day << "/" << year << "\n";
}

int main()
{
    Date date1("1/1/1900");
    date1.print();
    Date date2("January 1, 1900");
    date2.print();
    Date date3("Jan 1, 1900");
    date3.print();
    return 0;
}