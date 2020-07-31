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
    for (int (&row)[colCnt] : ia)       // a reference to an array of (4) ints; the parenthesis is necessary
        for (int num : row)
            cout << num << " ";

    cout << endl;
    // version 2
    for (size_t row = 0; row != rowCnt; ++row)
        for (size_t col = 0; col != colCnt; ++col)
            cout << ia[row][col] << " ";

    cout << endl;
    // version 3
    for (int (*p)[colCnt] = begin(ia); p != end(ia); ++p)   // a pointer to an array of (4) ints; the parenthesis is necessary
        for (int *q = begin(*p); q != end(*p); ++q)         // a pointer to an int
            cout << *q << " ";

    return 0;
}