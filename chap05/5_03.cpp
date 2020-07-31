/*Use the comma operator (§ 4.10, p. 157) to rewrite
 * the while loop from § 1.4.1 (p. 11) so that it no longer requires
 *  a block. Explain whether this rewrite im- proves or diminishes the readability of this code.
 */

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    int sum = 0, val = 1;
    while (val <= 10)
        sum += val, ++val;      // this rewrite deminishes the redability
    cout << "Sum of 1 to 10 inclusive is " << sum << endl;
    return 0;
}