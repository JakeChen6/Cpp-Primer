#include <iostream>
#include "Chapter6.h"

using std::cin;
using std::cout;
using std::endl;

int main()
{
    int i;
    cout << "Please input a number: ";
    cin >> i;
    cout << fact(i) << endl;
    return 0;
}
