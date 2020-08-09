#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using std::cout;
using std::vector;
using std::string;
using std::partition;

bool pred(const string &);

int main()
{
    vector<string> words = {"Hi", "Hello", "yes"};
    auto end_partition = partition(words.begin(), words.end(), pred);
    auto iter = words.begin();
    while (iter != end_partition)
        cout << *iter++ << " ";
    cout << "\n";
    return 0;
}

bool pred(const string &s)
{
    return s.size() >= 5;
}