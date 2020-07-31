#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    string s1, s2;
    cout << "Please input two strings" << endl;
    cin >> s1 >> s2;
    if (s1 == s2)
        cout << "Equal" << endl;
    else if (s1 > s2)
        cout << s1 << " is larger than " << s2 << endl;
    else
        cout << s2 << " is larger than " << s1 << endl;

    if (s1.size() == s2.size())
        cout << "Size Equal" << endl;
    else if (s1.size() > s2.size())
        cout << s1 << " is longer than " << s2 << endl;
    else
        cout << s2 << " is longer than " << s1 << endl;

    return 0;
}