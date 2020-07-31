#include <iostream>
#include <vector>

#define NDEBUG

using std::cin;
using std::cout;
using std::clog;
using std::endl;
using std::vector;

void printVec(const vector<int> &ivec, vector<int>::iterator it);

int main()
{
    vector<int> ivec = {0, 1, 2, 3, 4};
    printVec(ivec, ivec.begin());
    return 0;
}

void printVec(const vector<int> &ivec, vector<int>::iterator it)
{
    if (it == ivec.end())
        return;
    #ifndef NDEBUG
    clog << __FILE__ << " : function " << __func__
         << " at line " << __LINE__ << endl
         << "Compiled on " << __DATE__
         << " at " << __TIME__ << endl
         << "Vector size is " << ivec.end() - it << endl;
    #endif
    cout << *it << endl;
    printVec(ivec, ++it);
}
