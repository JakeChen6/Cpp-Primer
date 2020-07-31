#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    int a, b, c, d;
    while (cin >> a >> b >> c >> d && !(a > b && b > c && c > d))
        ;
    cout << a << " is greater than "
         << b << " is greater than "
         << c << " is greater than "
         << d << endl;
        return 0;
}