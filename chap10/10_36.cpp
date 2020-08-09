#include <list>
using std::list;

#include <algorithm>
using std::find;

#include <iostream>
using std::cout;

int main()
{
    list<int> ilst = {1, 0, 1, 2, 3, 0, 100, 2};
    auto iter = find(ilst.crbegin(), ilst.crend(), 0);
    cout << *++iter << "\n";    // should be 3
    return 0;
}