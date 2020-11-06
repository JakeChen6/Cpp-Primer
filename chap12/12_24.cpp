#include <iostream>
using std::cout; using std::endl;

char* read(char*, unsigned&, unsigned&);

int main()
{
    unsigned arrLen = 2;        // initial array length
    unsigned currLen = 0;       // current position
    char *p = new char[arrLen]();
    p = read(p, currLen, arrLen);

    cout << p << "\n"
         << "length: " << currLen << "\t"
         << "total length: " << arrLen << endl;
    return 0;
}

// The program reads a string and processes one character at a time.
// If the array is not large enough to hold the new characters, a new
// array is allocated with a size double that of the old array and the old
// array freed. This way, the program itself handles enlarging the array
// when appropriate in order to hold new characters.
char* read(char *p, unsigned &currLen, unsigned &arrLen)
{
    char ch;
    while ((ch = getchar()) && !isspace(ch)) {
        if (currLen == arrLen-1) {
            auto q = p;
            arrLen *= 2;                // double the array size
            p = new char[arrLen]();     // allocate a new array of chars
            strcpy(p, q);
            delete [] q;                // free the old array
        }
        // now we have enough space to hold the new char elements
        *(p+currLen) = ch;
        ++currLen;
    }
    return p;
}