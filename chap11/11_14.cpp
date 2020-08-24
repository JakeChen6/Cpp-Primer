/* Extend the map of children to their family name that you wrote
 * for the exercises in § 11.2.1 (p. 424) by having the vector
 * store a pair that holds a child’s name and birthday.
 */

#include <map>
using std::map;

#include <vector>
using std::vector;

#include <string>
using std::string;

#include <utility>
using std::pair; using std::make_pair;

#include <iostream>
using std::cin; using std::cout;

int main()
{
    map<string, vector<pair<string, string>>> families;
    string last_name, child_name;
    string birthday;
    while (cin >> last_name) {
        cin >> child_name;
        cin >> birthday;
        families[last_name].push_back(make_pair(child_name, birthday));
    }
    cout << "\n;"
    for (const auto &f : families) {
        cout << f.first << ":";
        for (const auto &s : f.second)
            cout << s.first << "-" << s.second << ", ";
        cout << "\n";
    }
    return 0;
}