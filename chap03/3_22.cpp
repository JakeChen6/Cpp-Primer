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
    string line;
    vector<string> text;
    while (getline(cin, line))
        text.push_back(line);

    // change the sentences in the first paragraph to all uppercase.
    for (auto it = text.begin(); it != text.end() && !it->empty(); ++it)
        for (auto &c : *it)
            c = toupper(c);

    for (auto line : text)
        cout << line << endl;

    return 0;
}