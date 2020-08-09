#include <vector>
#include <list>
#include <iterator>
#include <iostream>
#include <algorithm>

using std::cout;
using std::vector;
using std::list;
using std::back_inserter;
using std::inserter;
using std::front_inserter;
using std::copy;
using std::for_each;

int main()
{
    vector<int> ivec1 = {1, 2, 3, 4};
    vector<int> backVec, insertVec;
    list<int> frontLst;

    copy(ivec1.begin(), ivec1.end(), back_inserter(backVec));
    copy(ivec1.begin(), ivec1.end(), front_inserter(frontLst));
    copy(ivec1.begin(), ivec1.end(), inserter(insertVec, insertVec.begin()));

    auto f = [] (int i) { cout << i << " "; };

    for_each(backVec.cbegin(), backVec.cend(), f);      // 1, 2, 3, 4
    cout << "\n";
    for_each(frontLst.cbegin(), frontLst.cend(), f);    // 4, 3, 2, 1
    cout << "\n";
    for_each(insertVec.cbegin(), insertVec.cend(), f);  // 1, 2, 3, 4
    cout << "\n";

    return 0;
}