#include <iostream>

using std::cin;
using std::cout;
using std::endl;

void reset (int &);

int main()
{
    int i;
    cin >> i;
    reset(i);
    cout << i << endl;
    return 0;
}

void reset(int &i)
{
    i = 0;
}