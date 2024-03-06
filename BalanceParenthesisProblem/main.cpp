#include <iostream>
#include <stack>
#include <string>
using namespace std;

class Check_Parenthesis {
public:
    //// Constructor to take inputs
    Check_Parenthesis(const string& input) : parenthesis(input) {}

    bool isBalanced() {
        stack<char> s;//creating stack

        for (char c : parenthesis) {
            if (isOpenParenthesis(c)) {
                s.push(c);//push it onto the stack.
            } else if (isCloseParenthesis(c)) {
                if (s.empty() || !isMatchingOpenParenthesis(s.top(), c)) {
                    //check if it matches the top of the stack
                    return false;
                }
                s.pop();//pop it from the stack
            }
        }

        return s.empty();// parentheses are balanced
    }

private:
    const string parenthesis;

    bool isOpenParenthesis(char c) {
        return c == '(' || c == '[' || c == '{';
    }

    bool isCloseParenthesis(char c) {
        return c == ')' || c == ']' || c == '}';
    }

    bool isMatchingOpenParenthesis(char open, char close) {
        // Check open and close parentheses valid pair
        return (open == '(' && close == ')') || (open == '[' && close == ']') || (open == '{' && close == '}');
    }
};

int main() {
    string input;
    cout << "Enter parentheses to check: ";
    cin >> input;

    Check_Parenthesis checker(input);

    if (checker.isBalanced()) {
        cout << "YES Balanced" << endl;
    } else {
        cout << "NOT Balanced" << endl;
    }

    return 0;
}
