#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::size_t;

int func();

int main()
{
    int i;
    while (cin >> i)
        cout << func() << endl;
    return 0;
}

int func()
{
    static size_t ctr = 0;
    return ctr++;
}