#include <stack>
#include <iostream>
#include <string>

using std::stack;
using std::cout;
using std::string;

int main()
{
    string s = "(1+1)*(1-2)";

    stack<char> charStack;
    bool openParenthesis = false;    
    for (const auto &c : s) {
        if (openParenthesis) {
            if (c == ')') {
                while (charStack.top() != '(')
                    charStack.pop();
                charStack.pop();
                charStack.push('v');    // to indicate that a parenthesized expression is replaced
                openParenthesis = false;
            }
            else
                charStack.push(c);
        }
        else if (c == '(') {
            charStack.push(c);
            openParenthesis = true;
        }
        else
            charStack.push(c);
    }

    s.clear();
    while (!charStack.empty()) {
        s.push_back(charStack.top());
        charStack.pop();
    }

    // reverse the string
    auto iter = s.crbegin();
    while (iter != s.crend())
        cout << *iter++;
    cout << "\n";
    return 0;
}