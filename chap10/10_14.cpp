#include <iostream>

using std::cout;

auto f = [] (int i, int j) { return i + j; };

int main()
{
    cout << f(1, 2) << "\n";
    return 0;
}