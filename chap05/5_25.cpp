#include <iostream>
#include <stdexcept>

using std::cin;
using std::cout;
using std::endl;
using std::runtime_error;

int main()
{
    int i, j;
    while (true) {
        cin >> i >> j;
        try {
            if (!j)
                throw runtime_error("Zero division error.");
            break;
        } catch (runtime_error err) {
            cout << err.what() << "\nPlease try again." << endl;
        }
    }
    cout << i / j << endl;
    return 0;
}