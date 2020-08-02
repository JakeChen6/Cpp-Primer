#include <iostream>
#include <vector>

using std::cout;
using std::vector;

using intVecIter = vector<int>::iterator;

bool find(intVecIter, intVecIter, int);

int main()
{
    int i = 3;
    vector<int> ivec = {0, 1, 2, 3};
    if (find(ivec.begin(), ivec.end(), i))
        cout << i << " is in the vector." << "\n";
    else
        cout << i << " is not in the vector." << "\n";
    return 0;
}

bool find(intVecIter beg, intVecIter end, int i)
{
    while (beg != end) {
        if (*beg == i)
            return true;
        ++beg;              // advance the iterator to get the next element
    }
    return false;
}