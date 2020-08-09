#include "../chap01/Sales_item.h"

#include <algorithm>
using std::sort; using std::find_if; using std::copy;

#include <numeric>
using std::accumulate;

#include <iostream>
using std::cin; using std::cout; using std::endl;

#include <iterator>
using std::istream_iterator; using std::ostream_iterator;

#include <fstream>
using std::ifstream;

#include <vector>
using std::vector;

int main()
{
    ifstream in("10_32.txt");
    istream_iterator<Sales_item> item_iter(in), eof;
    ostream_iterator<Sales_item> out_iter(cout, "\n");

    // use a vector to hold the transactions
    vector<Sales_item> sales_vec(item_iter, eof);           // construct sales_vec from a pair of iterators
    sort(sales_vec.begin(), sales_vec.end(), compareIsbn);  // arrange the transactions in order
    copy(sales_vec.cbegin(), sales_vec.cend(), out_iter);

    auto iter = sales_vec.cbegin();
    while (iter != sales_vec.cend()) {
        auto not_equal = find_if(iter+1, sales_vec.cend(),  // find the first book that has a different isbn
                                 [iter] (const Sales_item &si)
                                        { return si.isbn() != iter->isbn(); });
        auto sum = accumulate(iter, not_equal, Sales_item());
        out_iter = sum; // write the current sum
        iter = not_equal;
    }
}