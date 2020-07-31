#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    // 00000000,00000000,00000000,01110001
    // 11111111,11111111,11111111,10001110
    // 11111111,11111111,11100011,10000000
    // -7296

    // warning: shifting a negative signed value is undefined
    cout << (~'q' << 6) << endl;    // the parenthesis are necessary!
    return 0;
}