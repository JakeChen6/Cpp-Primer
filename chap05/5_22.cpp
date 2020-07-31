#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int get_size();

int main()
{
    int sz;
    while ((sz = get_size()) <= 0)
        ;
    return 0;
}

int get_size()
{
    int i;
    cin >> i;
    return i;
}