#include <utility>
using std::pair; using std::make_pair;

#include <string>
using std::string;

#include <vector>
using std::vector;

#include <iostream>
using std::cin; using std::cout;

void first_way();
void second_way();
void third_way();

int main()
{
    //first_way();
    //cout << "\n";
    //second_way();
    //cout << "\n";
    third_way();
    cout << "\n";

    return 0;
}

// This version is easiest to write and understand because make_pair() explicitly
// states the intention.
void first_way()
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
}

void second_way()
{
    vector<pair<string, int>> pairVec;
    string s;
    int i;
    while (cin >> s) {
        cin >> i;
        pairVec.push_back(pair<string, int>(s, i));
    }
    for (const auto &p : pairVec)
        cout << p.first << "\t" << p.second << "\n";
}

void third_way()
{
    vector<pair<string, int>> pairVec;
    string s;
    int i;
    while (cin >> s) {
        cin >> i;
        pairVec.push_back({s, i});
    }
    for (const auto &p : pairVec)
        cout << p.first << "\t" << p.second << "\n";
}