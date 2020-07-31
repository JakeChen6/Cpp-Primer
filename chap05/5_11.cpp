#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    unsigned aCnt =0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0;
    unsigned blankCnt = 0, tabCnt = 0, newlineCnt = 0;
    int ch;     // the type of ch must be big enough to hold EOF
    while ((ch = getchar()) != EOF) {
        if (ch == 'a' || ch == 'A')
            ++aCnt;
        else if (ch == 'e' || ch == 'E')
            ++eCnt;
        else if (ch == 'i' || ch == 'I')
            ++iCnt;
        else if (ch == 'o' || ch == 'O')
            ++oCnt;
        else if (ch == 'u' || ch == 'U')
            ++uCnt;
        else if (ch == ' ')
            ++blankCnt;
        else if (ch == '\t')
            ++tabCnt;
        else if (ch == '\n')
            ++newlineCnt;
    }
    cout << "Number of vowel a: \t" << aCnt << '\n'
         << "Number of vowel e: \t" << eCnt << '\n'
         << "Number of vowel i: \t" << iCnt << '\n'
         << "Number of vowel o: \t" << oCnt << '\n'
         << "Number of vowel u: \t" << uCnt << '\n'
         << "Number of vowel blank spaces: \t" << blankCnt << '\n'
         << "Number of vowel tabs: \t" << tabCnt << '\n'
         << "Number of vowel newlines: \t" << newlineCnt << endl;
    return 0;
}