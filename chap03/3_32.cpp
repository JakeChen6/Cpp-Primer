#include <iostream>
#include <cstddef>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main()
{
    int arr[10];
    for (size_t ix = 0; ix < 10; ++ix)
        arr[ix] = ix;

    int arr2[10];
    for (size_t ix = 0; ix < 10; ++ix)
        arr2[ix] = arr[ix];

    vector<int> vec;        // no need to specify size upfront
    for (auto i : arr)
        vec.push_back(i);   // use 'push_back' instead of subscripting a fixed-size array to do assignments.

    for (auto i : vec)
        cout << i << endl;
    return 0;
}