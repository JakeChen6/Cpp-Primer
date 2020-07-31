#include <iostream>

using std::cin;
using std::cout;
using std::endl;

void swap(int &, int &);

int main()
{
    int i, j;
    cin >> i >> j;
    swap(i, j);
    cout << i << " " << j << endl;
    return 0;
}

void swap(int &i, int &j)
{
    int tem = i;
    i = j;
    j = tem;
}