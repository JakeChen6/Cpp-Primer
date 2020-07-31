#include <iostream>
#include <cstring>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    char cs1[20] = "string1", cs2[] = "string2";    // cs1 must be big enough to concatenate cs2
    char cs3[30];
    strcpy(cs3, strcat(cs1, cs2));
    cout << cs3 << endl;
    return 0;
}