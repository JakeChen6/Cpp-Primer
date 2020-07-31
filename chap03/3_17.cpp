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
    string word;
    vector<string> vec;
    while (cin >> word)
        vec.push_back(word);
    for (auto &str : vec)
        for (auto &c : str)
            c = toupper(c);
    for (auto str : vec)
        cout << str << endl;
    return 0;
}