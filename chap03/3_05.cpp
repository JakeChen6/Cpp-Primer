#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    string large, s;
    while (cin >> s)
        large += s + ' ';
    cout << large;
    return 0;
}