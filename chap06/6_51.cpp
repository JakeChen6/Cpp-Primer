#include <iostream>

#define NDEBUG

using std::cin;
using std::cout;
using std::endl;

void f();
void f(int);
void f(int, int);
void f(double, double);

int main()
{
    f(42);
    f(42, 0);
    f(2.56, 3.14);
    #ifndef NDEBUG
    f(2.56, 42);
    #endif
    return 0;
}

void f()
{
    cout << "Running f()" << endl;
}

void f(int i)
{
    cout << "Running f(int)" << endl;
}

void f(int i, int j)
{
    cout << "Running f(int, int)" << endl;
}

void f(double m, double n)
{
    cout << "Running f(double, double)" << endl;
}