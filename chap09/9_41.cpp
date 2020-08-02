#include <string>
#include <vector>
#include <iostream>

using std::string;
using std::vector;
using std::cout;

int main()
{
    vector<char> chvec = {'H', 'i'};
    string s(chvec.cbegin(), chvec.cend());
    cout << s << "\n";
    return 0;
}