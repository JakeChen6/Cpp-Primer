#include <iostream>
#include <stdexcept>

using std::cin;
using std::cout;
using std::endl;
using std::runtime_error;

int main()
{
    int i, j;
    cin >> i >> j;
    if (!j)
        throw runtime_error("Zero division error.");
    cout << i / j << endl;
    return 0;
}