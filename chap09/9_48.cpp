#include <iostream>
#include <string>

using std::cout;
using std::string;

int main()
{
    string name("AnnaBelle");
    string numbers("0123456789");

    cout << numbers.find(name) << "\n"; // 2^64 - 1
    return 0;
}