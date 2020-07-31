#include <iostream>

using std::cin;
using std::cout;
using std::endl;

/* overflow means a value is computed that is outside
 * the range of values that the type can represent.
 */

int main()
{
    int int_value = 2147483647;
    int_value += 1;
    cout << "int_value: " << int_value << endl;

    short short_value = 32767;
    short_value += 1;
    cout << "short_value: " << short_value << endl;

    long long_value = 9223372036854775807;
    long_value += 1;
    cout << "long_value: " << long_value << endl;

    return 0;
}