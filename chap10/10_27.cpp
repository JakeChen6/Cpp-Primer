#include <vector>
#include <list>
#include <iterator>
#include <iostream>

using std::cout;
using std::endl;
using std::vector;
using std::list;
using std::back_inserter;

int main()
{
    vector<int> ivec = {1, 1, 2, 3, 4};
    list<int> ilst;
    std::unique_copy(ivec.cbegin(), ivec.cend(),
                     back_inserter(ilst));
    for (auto i : ilst)
        cout << i << " ";
    cout << endl;
    return 0;
}