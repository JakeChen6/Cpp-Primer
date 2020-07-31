#include <iostream>

using std::cin;
using std::cout;
using std::endl;

// reference to pointer
void swap(int* &, int* &);

int main()
{
    int i = 1, j = 2;
    int *p = &i, *q = &j;
    swap(p, q);
    cout << *p << " " << *q << endl;
    return 0;
}

void swap(int* &p, int* &q)
{
    int *tem = p;
    p = q;
    q = tem;
}