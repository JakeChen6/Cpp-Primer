#include <iostream>
#include <string>
#include <cctype>

using std::cin;
using std::cout;
using std::endl;
using std::string;

bool hasCapital(const string &);
void lower(string &);

int main()
{
    string s;
    cin >> s;
    if (hasCapital(s))
        cout << s << " has capital letter(s)." << endl;
    else
        cout << s << " has no capital letter." << endl;

    lower(s);
    cout << s << endl;

    return 0;
}

bool hasCapital(const string &s)
{
    for (auto c : s)
        if (isupper(c))
            return true;
    return false;
}

void lower(string &s)
{
    for (auto &c : s)
        c = tolower(c);
}