#include <iostream>
#include <initializer_list>

using std::cin;
using std::cout;
using std::endl;
using std::initializer_list;

int mySum(initializer_list<int> ilst);

int main()
{
    cout << mySum({1, 2, 3, 4, 5}) << endl;
    return 0;
}

int mySum(initializer_list<int> ilst)
{
    int sum = 0;
    for (const auto &i : ilst)      // always use reference because there's no need to copy the elements
        sum += i;
    return sum;
}