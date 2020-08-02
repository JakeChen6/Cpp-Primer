#include <iostream>
#include <list>
#include <vector>
#include <string>

using std::cout;
using std::endl;
using std::list;
using std::vector;
using std::string;

int main()
{
    list<const char *> cstrings= {"H", "Hi", "Hello"};
    vector<string> svec;
    svec.assign(cstrings.cbegin(), cstrings.cend());
    for (auto &s : svec)
        cout << s << "\n";
    return 0;
}