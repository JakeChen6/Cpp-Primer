#include <iostream>
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main()
{
    string s;
    while (cin >> s)
        ;

    vector<int> ivec = {0, 1, 2, 3, 4};
    for (decltype(ivec.size()) ix = 0; ix != ivec.size(); ++ix)
        cout << ivec[ix] << " ";
    cout << endl;

    // start rewriting
    for (string s; cin >> s; )
        ;

    decltype(ivec.size()) ix = 0;
    while (ix != ivec.size())
        cout << ivec[ix++] << " ";

    return 0;
}