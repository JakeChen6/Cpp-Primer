#include <map>
using std::map;

#include <iostream>
using std::cout;

int main()
{
    map<int, int> im({{1, 1}});
    auto it = im.begin();
    it->second = 2;
    cout << im[1] << "\n";
    return 0;
}