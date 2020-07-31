#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

using arrT = string[10];

arrT& func1();                      // type alias
auto func2() -> string (&) [10];    // trailing return type; most concise.

string sArr[10];
decltype(sArr) &func3();            // decltype

int main()
{
    ;
}