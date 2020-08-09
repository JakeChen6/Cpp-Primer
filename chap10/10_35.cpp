#include <vector>
using std::vector;

#include <iostream>
using std::cout; using std::endl;

#include <iterator>
using std::ostream_iterator;

#include <algorithm>
using std::copy;

int main()
{
    ostream_iterator<int> out_iter(cout, " ");
    vector<int> ivec = {1, 2, 3, 4};
    auto iter = ivec.cend() - 1;
    while (iter >= ivec.cbegin())
        out_iter = *iter--;
    cout << endl;
    return 0;
}