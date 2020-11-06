#include <string>
using std::string;

#include <iostream>
using std::cout;

int main()
{
    const char *c1 = "Hello ";
    const char *c2 = "World";
    unsigned len = strlen(c1) + strlen(c2) + 1;
    char *p = new char[len]();      // allocate an array of chars
    strcpy(p, c1);
    strcat(p, c2);
    cout << p << "\n";
    delete [] p;                    // free the allocated array

    string s1("Hello ");
    string s2("World");
    string s3 = s1 + s2;
    cout << s3 << "\n";

    return 0;
}
