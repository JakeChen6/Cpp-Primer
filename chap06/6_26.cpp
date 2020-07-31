#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main(int argc, char *argv[])
{
    for (size_t i = 1; i != argc; ++i)
        cout << argv[i] << endl;
    return 0;
}