#include <iostream>
#include <iterator>

using std::cin;
using std::cout;
using std::endl;
using std::begin;
using std::end;

void print1(const int *, const int *);
void print2(const int [], size_t);

int main()
{
    int i = 0, j[2] = {0, 1};

    print1(begin(j), end(j));
    print2(j, end(j) - begin(j));
}

void print1(const int *beg, const int *end)
{
    while (beg != end)
        cout << *beg++ << endl;
}

void print2(const int ia[], size_t size)
{
    for (size_t i = 0; i != size; ++i)
        cout << ia[i] << endl;
}