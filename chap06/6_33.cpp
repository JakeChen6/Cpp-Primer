#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

void printVec(const vector<int> &ivec, vector<int>::iterator it);
void printVec2(vector<int>::iterator beg, vector<int>::iterator end);

int main()
{
    vector<int> ivec = {0, 1, 2, 3, 4};
    printVec(ivec, ivec.begin());
    printVec2(ivec.begin(), ivec.end());
    return 0;
}

// not going to change ivec, so const;
// use reference otherwise ivec is copied each time the function is called,
// making ivec.end() changes each time.
void printVec(const vector<int> &ivec, vector<int>::iterator it)
{
    if (it == ivec.end())
        return;
    cout << *it << endl;
    printVec(ivec, ++it);
}

void printVec2(vector<int>::iterator beg, vector<int>::iterator end)
{
    if (beg == end)
        return;
    cout << *beg << endl;
    printVec2(++beg, end);
}