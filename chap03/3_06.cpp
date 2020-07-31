#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    string line;
    getline(cin, line);
    for (auto &c : line)
        c = 'X';
    cout << line << endl;
    return 0;
}