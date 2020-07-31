#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main(int argc, char *argv[])
{
    string s;
    for (size_t i = 1; i != argc; ++i)
        s += argv[i];
    cout << s << endl;
    return 0;
}