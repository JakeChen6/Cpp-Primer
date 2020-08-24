#include <iostream>
using std::cout;

#include <map>
using std::map;

#include <vector>
using std::vector;

#include <string>
using std::string;

int main()
{
    map<string, vector<int>> m;
    m["hi"] = {0, 1, 2, 3, 4};
    map<string, vector<int>>::iterator ret = m.find("hi");
    for (const auto &i : ret->second)
        cout << i << " ";
    cout << "\n";
    return 0;
}