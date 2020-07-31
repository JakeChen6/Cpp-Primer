#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int func(int, int);

int main()
{
    vector<decltype(func) *> vec;
}

int func(int i, int j)
{
    return i;
}