#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    unsigned long ul1 = 3, ul2 = 7;
    // ul1: 000...00011
    // ul2: 000...00111

    // the parenthesis are necessary!!!
    cout << (ul1 & ul2) << endl;      // 3
    cout << (ul1 | ul2) << endl;      // 7
    cout << (ul1 && ul2) << endl;     // 1
    cout << (ul1 || ul2) << endl;     // 1
    return 0;
}