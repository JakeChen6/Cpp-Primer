#include <iostream>
#include <vector>
#include <iterator>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::begin;
using std::end;

int main()
{
    constexpr size_t rowCnt = 3, colCnt = 4;    // constexpr is necessary
    int ia[rowCnt][colCnt];
    size_t cnt = 0;
    for (auto &row : ia)
        for (auto &col : row)
            col = cnt++;

    // version 1
    for (auto &row : ia)
        for (auto num : row)
            cout << num << " ";

    cout << endl;
    // version 2
    for (size_t row = 0; row != rowCnt; ++row)
        for (size_t col = 0; col != colCnt; ++col)
            cout << ia[row][col] << " ";

    cout << endl;
    // version 3
    for (auto p = begin(ia); p != end(ia); ++p)
        for (auto q = begin(*p); q != end(*p); ++q)
            cout << *q << " ";

    return 0;
}