#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    int i;
    cin >> i;
    if (i % 2)
        cout << i << " is odd." << endl;
    else
        cout << i << " is even." << endl;
    return 0;
}