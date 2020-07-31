#include <iostream>

using std::cin;
using std::cout;
using std::endl;

double abs(double x);

int main()
{
    double val;
    cin >> val;
    cout << abs(val) << endl;
    return 0;
}

double abs(double x)
{
    return x >= 0 ? x : -x;
}