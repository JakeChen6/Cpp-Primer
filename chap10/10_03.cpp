#include <numeric>
#include <vector>
#include <iostream>

using std::cout;
using std::vector;
using std::accumulate;

int main()
{
    vector<int> ivec = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    cout << "sum of ivec is "
         << accumulate(ivec.cbegin(), ivec.cend(), 0)
         << "\n";
    return 0;
}