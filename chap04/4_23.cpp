#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    string s = "word";
    string pl = s + (s[s.size() - 1] == 's' ? "" : "s");
    cout << pl << endl;
    return 0;
}