#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    int int_value;
    while (cin >> int_value && int_value != 42)
        ;
    cout << int_value << " should be 42." << endl;
    return 0;
}