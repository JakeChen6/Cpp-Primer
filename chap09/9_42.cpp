#include <string>
#include <iostream>

using std::cin;
using std::cout;
using std::string;

int main()
{
    char ch;
    string s;
    s.reserve(100);     // preallocate the space for the string
    while (cin >> ch)
        s.push_back(ch);
    cout << s << "\n";
    return 0;
}