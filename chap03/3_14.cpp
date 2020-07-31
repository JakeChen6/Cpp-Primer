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
    vector<int> vec;
    while (cin >> i)
        vec.push_back(i);
    cout << vec.size() << endl;
    return 0;
}