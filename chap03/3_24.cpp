#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main()
{
    int i;
    vector<int> v;
    while (cin >> i)
        v.push_back(i);

    for (auto it = v.cbegin(); it != v.cend()-1; ++it)  // remember to subtract 1 from cend
        cout << *it + *(it+1) << endl;

    cout << endl;
    auto it1 = v.cbegin(), it2 = v.cend()-1;    // remember to subtract 1 from cend
    while (it1 < it2)
        cout << *(it1++) + *(it2--) << endl;
    return 0;
}