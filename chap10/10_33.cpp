#include <iostream>
using std::cout;

#include <iterator>
using std::istream_iterator; using std::ostream_iterator;

#include <fstream>
using std::ifstream; using std::ofstream;

#include <algorithm>
using std::for_each;

#include <vector>
using std::vector;

int main()
{
    ifstream in("10_33.txt");
    ofstream out_odd("10_33_odd.txt");
    ofstream out_even("10_33_even.txt");
    istream_iterator<int> int_iter(in), eof;
    ostream_iterator<int> out_iter_odd(out_odd, " ");
    ostream_iterator<int> out_iter_even(out_even, "\n");

    vector<int> ivec(int_iter, eof);    // construct ivec from a pair of iterators
    for_each(ivec.cbegin(), ivec.cend(),
             [&] (int i)
                 { if (i % 2) out_iter_odd = i; else out_iter_even = i; });
    return 0;
}
