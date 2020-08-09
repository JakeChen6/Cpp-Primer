#include <vector>
#include <algorithm>
#include <iostream>

using std::vector;
using std::count;
using std::cin;
using std::cout;

int main()
{
    vector<int> ivec;
    int i;
    int val = 5;
    while (cin >> i)
        ivec.push_back(i);
    cout << "count of " << val << " is "
         << count(ivec.cbegin(), ivec.cend(), val) << "\n";
    return 0;
}
