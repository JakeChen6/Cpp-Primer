#include <iostream>
#include <string>
#include <cctype>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    string line1, line2;
    getline(cin, line1);
    for (auto c : line1)
        if (!ispunct(c))
            line2 += c;
    cout << line2 << endl;
    return 0;

}