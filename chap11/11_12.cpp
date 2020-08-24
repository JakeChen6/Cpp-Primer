#include <utility>
using std::pair; using std::make_pair;

#include <string>
using std::string;

#include <vector>
using std::vector;

#include <iostream>
using std::cin; using std::cout;

int main()
{
    vector<pair<string, int>> pairVec;
    string s;
    int i;
    while (cin >> s) {
        cin >> i;
        pairVec.push_back(make_pair(s, i));
    }
    for (const auto &p : pairVec)
        cout << p.first << "\t" << p.second << "\n";
    return 0;
}