#include <map>
using std::map;

#include <vector>
using std::vector;

#include <string>
using std::string;

#include <iostream>
using std::cin; using std::cout;

int main()
{
    map<string, vector<string>> families;
    string last_name, child_name;
    while (cin >> last_name)
        if (cin >> child_name)
            families[last_name].push_back(child_name);
    for (const auto &f : families) {
        cout << f.first << "-";
        for (const auto &s : f.second)
            cout << s << ", ";
        cout << "\n";
    }
    return 0;
}