#include <vector>
#include <string>
#include <algorithm>
#include <iostream>

using std::vector;
using std::string;
using std::stable_sort;
using std::unique;
using std::cout;

void elimDeups(vector<string> &);
void print(vector<string> &);
bool isShorter(const string &, const string &);

int main()
{
    vector<string> words = {"the", "quick", "red", "fox", "jumps",
                            "over", "the", "slow", "red", "turtle"};
    elimDeups(words);
    stable_sort(words.begin(), words.end(), isShorter);
    print(words);
    return 0;
}

void elimDeups(vector<string> &words)
{
    cout << "before eliminating duplicates: ";
    print(words);
    sort(words.begin(), words.end());
    cout << "after sorting: ";
    print(words);
    auto end_unique = unique(words.begin(), words.end());
    cout << "after the call to unique: ";
    print(words);
    words.erase(end_unique, words.end());
    cout << "after the call to erase";
    print(words);
}

void print(vector<string> &words)
{
    for (const auto &s : words) // read-only, so const; no need to copy the string, so &.
        cout << s << " ";
    cout << "\n";
}

bool isShorter(const string &s1, const string &s2)
{
    return s1.size() < s2.size();
}