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
    vector<int> v1 (10, 42);    // this is the preferred way, it's concise and does exactly what we want.
    vector<int> v2 {42, 42, 42, 42, 42, 42, 42, 42, 42, 42};
    vector<int> v3 (10);
    for (auto &i : v3)
        i = 42;

    for (auto i : v1)
        cout << i << " ";
    cout << endl;
    for (auto i : v2)
        cout << i << " ";
    cout << endl;
    for (auto i : v3)
        cout << i << " ";
    cout << endl;

}