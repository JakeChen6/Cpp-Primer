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
    vector<decltype(func) *> vec = {add, subtract, multiply, divide};
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