#include <iostream>
#include <vector>
#include <cctype>

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
    for (decltype(v.size()) n = 1; n < v.size(); ++n)
        cout << v[n] + v[n-1] << endl;

    cout << endl;
    for (decltype(v.size()) n = 0; n < v.size()/2; ++n)
        cout << v[n] + v[v.size()-n-1] << endl;
    return 0;
}