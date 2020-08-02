#include <iostream>
#include <vector>
#include <list>

using std::cout;
using std::endl;
using std::vector;
using std::list;

int main()
{
    list<int> ilst = {0, 1, 2, 3};
    vector<int> ivec = {0, 1, 2, 3};
    vector<double> dvec1 (ilst.cbegin(), ilst.cend());
    vector<double> dvec2 (ivec.cbegin(), ivec.cend());

    for (auto &d : dvec1)
        cout << d << " ";
    cout << "\n";

    for (auto &d : dvec2)
        cout << d << " ";
    cout << endl;
    return 0;
}
