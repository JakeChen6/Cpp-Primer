#include <iostream>
using std::cout; using std::endl;

#include <iterator>
using std::ostream_iterator;

#include <algorithm>
using std::copy;

#include <vector>
using std::vector;

#include <list>
using std::list;

int main()
{
    ostream_iterator<int> out_iter(cout, " ");
    vector<int> ivec = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    auto riter = ivec.crend() - 7;
    auto end = ivec.crend() - 3 + 1;
    list<int> ilst(riter, end);
    copy(ilst.cbegin(), ilst.cend(), out_iter);
    cout << endl;
    return 0;
}