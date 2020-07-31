#include <iostream>
#include <iterator>

using std::cin;
using std::cout;
using std::endl;
using std::begin;
using std::end;

int main()
{
    int arr[10];
    int *p1 = begin(arr), *p2 = end(arr);
    while (p1 != p2)
        *(p1++) = 0;
    for (auto i : arr)
        cout << i << endl;
    return 0;
}