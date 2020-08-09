#include <iostream>
using std::cin; using std::cout; using std::endl;

#include <algorithm>
using std::sort; using std::copy;

#include <vector>
using std::vector;

#include <iterator>
using std::istream_iterator; using std::ostream_iterator;

int main()
{
    istream_iterator<int> int_iter(cin), eof;
    ostream_iterator<int> out_iter(cout, " ");

    vector<int> ivec(int_iter, eof);
    sort(ivec.begin(), ivec.end());
    copy(ivec.cbegin(), ivec.cend(), out_iter);
    cout << endl;
    return 0;
}