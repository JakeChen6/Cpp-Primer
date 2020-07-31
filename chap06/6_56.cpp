#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int func(int, int);
int add(int, int);
int subtract(int, int);
int multiply(int, int);
int divide(int, int);

int main()
{
    vector<decltype(func) *> vec = {add, subtract, multiply, divide};   // address-of operator is optional
    cout << vec[0](1, 2) << endl;
    cout << vec[1](1, 2) << endl;
    cout << vec[2](1, 2) << endl;
    cout << vec[3](3, 2) << endl;
}

int func(int i, int j)
{
    return i;
}

int add(int i, int j)
{
    return i + j;
}

int subtract(int i, int j)
{
    return i - j;
}

int multiply(int i, int j)
{
    return i * j;
}

int divide(int i, int j)
{
    return i / j;
}