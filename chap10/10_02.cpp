#include <list>
#include <string>
#include <iostream>

using std::list;
using std::string;
using std::cin;
using std::cout;

int main()
{
    list<string> strlst;
    string s;
    string target = "yes";
    while (cin >> s)
        strlst.push_back(s);
    cout << "count of " << target << " is "
         << count(strlst.cbegin(), strlst.cend(), target) << "\n";
    return 0;
}