#include <iostream>
#include <cstddef>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    //int arr[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int arr[10];
    for (size_t ix = 0; ix < 10; ++ix)
        arr[ix] = ix;
    for (auto i : arr)
        cout << i << endl;
    return 0;
}