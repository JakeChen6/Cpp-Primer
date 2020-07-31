#include <iostream>
#include <vector>
#include <iterator>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::begin;
using std::end;

int main()
{
    vector<int> ivec = {0, 1, 2, 3, 4, 5};
    int int_arr[6];     // need to specify the size upfront
    for (decltype(ivec.size()) ix = 0; ix != ivec.size(); ++ix)
        int_arr[ix] = ivec[ix];
    for (auto pt = begin(int_arr); pt != end(int_arr); ++pt)
        cout << *pt << " ";
    return 0;
}