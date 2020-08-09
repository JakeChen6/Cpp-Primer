#include <list>
#include <vector>
#include <iostream>
#include <iterator>
#include <algorithm>

using std::list;
using std::vector;
using std::cin;
using std::cout;
using std::back_inserter;
using std::copy;
using std::fill_n;

int main()
{
    vector<int> ivec;
    list<int> ilst;
    int i;
    while (cin >> i)
        ilst.push_back(i);
    copy(ilst.cbegin(), ilst.cend(), back_inserter(ivec));
    for (auto &i : ivec)
        cout << i << " ";
    cout << "\n";

    vector<int> ivec2;
    ivec2.reserve(10);  // reserve changes the capacity but not the number of elements in the container
    fill_n(back_inserter(ivec2), 10, 0);    // still need an insert iterator
    for (auto &i : ivec2)
        cout << i << " ";
    cout << "\n";

    return 0;
}