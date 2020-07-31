#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    cout << -30 * 3 + 21 / 5 << endl;   // -90 + 4 = -86
    cout << -30 + 3 * 21 / 5 << endl;   // -30 + 63 / 5 = -30 + 12 = -18
    cout << 30 / 3 * 21 % 5 << endl;    // 10 * 21 % 5 = 210 % 5 = 0
    cout << -30 / 3 * 21 % 4 << endl;   // -10 * 21 % 4 = -210 % 4 = -2
    return 0;
}
