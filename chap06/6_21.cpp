#include <iostream>

using std::cin;
using std::cout;
using std::endl;

// use a pointer to const because the function does not need write access.
int larger(int, const int *);

int main()
{
    int i = 2;
    cout << larger (1, &i) << endl;
    return 0;
}

int larger(int i, const int *p)
{
    return i > *p ? i : *p;
}