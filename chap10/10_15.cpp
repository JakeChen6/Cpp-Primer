#include <iostream>

using std::cout;

int main()
{
    int i = 1;
    auto f = [i] (int j) { return i + j; };
    cout << f(2) << "\n";
    return 0;
}