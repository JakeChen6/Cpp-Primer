#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int fact(int val);

int main()
{
    int i;
    cout << "Please input a number: ";
    cin >> i;
    cout << fact(i) << endl;
    return 0;
}

int fact(int val)
{
    int ret = 1;
    while (val > 1)
        ret *= val--;
    return ret;
}