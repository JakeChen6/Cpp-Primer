#include <string>
#include <iostream>

using std::string;
using std::cout;

void replace(string &, const string &, const string &);

int main()
{
    string s = "tho it is hard, thru teamwork we can make it!";
    replace(s, "tho", "though");
    replace(s, "thru", "through");
    cout << s << "\n";
    return 0;
}

void replace(string &s, const string &oldVal, const string &newVal)
{
    auto size = oldVal.size();
    string::size_type pos = 0;
    while (pos < s.size()) {
        if (s.substr(pos, size) == oldVal) {
            s.replace(pos, size, newVal);
            pos += newVal.size() - size + 1;        // update the position
        }
        else
            ++pos;
    }
}