#include <iostream>
#include <vector>

using std::cout;
using std::vector;

using intVecIter = vector<int>::iterator;

intVecIter find(intVecIter, intVecIter, int);

int main()
{
    int i = 3;
    vector<int> ivec = {0, 1, 2, 3};
    if (find(ivec.begin(), ivec.end(), i) != ivec.end())
        cout << i << " is in the vector." << "\n";
    else
        cout << i << " is not in the vector." << "\n";
    return 0;
}

intVecIter find(intVecIter beg, intVecIter end, int i)
{
    while (beg != end) {
        if (*beg == i)
            return beg;
        ++beg;              // advance the iterator to get the next element
    }
    return end;             // if i is not in the vector, return the end iterator.
}