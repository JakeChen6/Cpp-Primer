#include <iostream>
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main()
{
    vector<string> svec;
    string s;
    while (cin >> s)        // read strings
        svec.push_back(s);

    string maxWord, curWord;
    int maxCnt = 0, curCnt;

    for (auto it = svec.begin(); it != svec.end(); ++it) {
        if (*it == curWord) {
            curCnt += 1;
            if (curCnt > maxCnt) {
                maxCnt = curCnt;
                maxWord = curWord;
            }
        }
        else {
            curWord = *it;
            curCnt = 1;
        }
    }

    if (maxCnt)
        cout << maxWord << " occurred " << maxCnt << " times" << endl;
    else
        cout << "no word was repeated." << endl;
    return 0;
}