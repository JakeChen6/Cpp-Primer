#include <map>
using std::map;

#include <iostream>
using std::cout; using std::endl;

// key_type

// mapped_type

int main()
{
    map<int, int> m;
    int sub = 0;
    int ret;
    ret = m[sub];   // a value initialized int type 0 is returned.
    cout << ret << endl;
    return 0;
}