#include <vector>
#include <list>
#include <iterator>
#include <iostream>

using std::vector;
using std::list;
using std::cbegin;
using std::cend;
using std::cout;

int main()
{
    int ia[] = { 0, 1, 1, 2, 3, 5, 8, 13, 21, 55, 89 };
    vector<int> ivec (cbegin(ia), cend(ia));
    list<int> ilst (cbegin(ia), cend(ia));

    auto lst_it = ilst.begin();
    while (lst_it != ilst.end())
        if (*lst_it % 2)
            lst_it = ilst.erase(lst_it);
        else
            ++lst_it;

    auto vec_it = ivec.begin();
    while (vec_it != ivec.end())
        if (!(*vec_it % 2))
            vec_it = ivec.erase(vec_it);
        else
            ++vec_it;

    for (auto i : ivec)
        cout << i << " ";
    cout << "\n";
    for (auto i : ilst)
        cout << i << " ";
    cout << "\n";

    return 0;
}