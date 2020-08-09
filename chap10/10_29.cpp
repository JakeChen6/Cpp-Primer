#include <iostream>
using std::cin;
using std::cout;

#include <fstream>
using std::ifstream;

#include <iterator>
using std::istream_iterator;
using std::ostream_iterator;

#include <algorithm>
using std::copy;

#include <vector>
using std::vector;

#include <string>
using std::string;

int main()
{
    // use stream iterators to read a text file into a vector of strings.
    ifstream in("10_29.txt");
    istream_iterator<string> str_iter(in), eof;
    ostream_iterator<string> out_iter(cout, "\n");

    vector<string> svec(str_iter, eof);     // the range is obtained by reading the associated stream.
    copy(svec.cbegin(), svec.cend(), out_iter);
    return 0;
}