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

    using int_array = int[colCnt];      // type alias

    // version 1
    for (int_array &row : ia)
        for (int num : row)
            cout << num << " ";

    cout << endl;
    // version 2
    for (size_t row = 0; row != rowCnt; ++row)
        for (size_t col = 0; col != colCnt; ++col)
            cout << ia[row][col] << " ";

    cout << endl;
    // version 3
    for (int_array *p = begin(ia); p != end(ia); ++p)
        for (int *q = begin(*p); q != end(*p); ++q)
            cout << *q << " ";

    return 0;
}