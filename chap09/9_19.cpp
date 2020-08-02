#include <iostream>
#include <list>         // need to include <list> instead of <deque>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::list;
using std::string;

int main()
{
    list<string> strlst;    // use container type list instead of deque; also need to change the
                            // variable name so that it is meaningful.
    string s;
    while (cin >> s)
        strlst.push_back(s);

    for (auto it = strlst.cbegin(); it != strlst.cend(); ++it)
        cout << *it << " ";

    cout << endl;
    return 0;
}