#include <iostream>
#include <iterator>

using std::cin;
using std::cout;
using std::endl;
using std::begin;
using std::end;

int main()
{
    int arr1[] = {1, 2, 3, 4, 6};
    int arr2[] = {1, 2, 3, 4, 5};

    bool print = false;

    int *p1b = begin(arr1), *p2b = begin(arr2);
    int *p1e = end(arr1), *p2e = end(arr2);
    while (p1b != p1e && p2b != p2e) {
        if (*p1b == *p2b) {
            ++p1b;
            ++p2b;
        } else if (*p1b > *p2b) {
            cout << "array 1 is larger than arrat 2." << endl;
            print = true;
            break;
        } else {
            cout << "array 2 is larger than arrat 1." << endl;
            print = true;
            break;
        }
    }

    if (!print) {
        if (p1b == p1e && p2b == p2e)
            cout << "array 1 is equal to array 2." << endl;
        else if (p1b != p1e)
            cout << "array 1 is longer than array 2." << endl;
        else
            cout << "array 2 is longer than array 1." << endl;
    }

    return 0;
}