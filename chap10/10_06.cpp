#include <vector>
#include <iostream>
#include <iterator>
#include <algorithm>

using std::vector;
using std::cout;
using std::back_inserter;
using std::fill_n;

int main()
{
    vector<int> ivec;
    fill_n(back_inserter(ivec), 10, 0);
    for (auto &i : ivec)
         cout << i << " ";
    cout << "\n";
    return 0;
}