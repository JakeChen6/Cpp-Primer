#include <iostream>
#include <string>
#include <cstring>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::strcmp;

int main()
{
    string s1, s2;
    getline(cin, s1);
    getline(cin, s2);
    if (s1 == s2)
        cout << "Equal" << endl;
    else if (s1 > s2)
        cout << "string 1 is larger than string 2" << endl;
    else
        cout << "string 2 is larger than string 1" << endl;

    char cs1[] = "string1", cs2[] = "string2";
    int res = strcmp(cs1, cs2);
    if (!res)
        cout << "Equal" << endl;
    else if (res > 0)
        cout << "string 1 is larger than string 2" << endl;
    else
        cout << "string 2 is larger than string 1" << endl;

    return 0;
}