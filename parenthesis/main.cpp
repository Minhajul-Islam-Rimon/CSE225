#include<iostream>
#include<stack>
using namespace std;

bool balance_parenthesis();  

int main()
{
    if (balance_parenthesis()) {  // Check the return value is true or not
        cout << "YES Balanced" << endl;
    } else {
        cout << "NOT Balanced" << endl;
    }
    return 0;
}

bool balance_parenthesis()
{
    stack<char> a;
    string s;
    cout << "Enter parenthesis to check:";
    cin >> s;

    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '{' || s[i] == '[' || s[i] == '(') {
            // Push to stack
            a.push(s[i]);
        } else if (s[i] == '}' || s[i] == ']' || s[i] == ')') {
            // Check for matching opening parenthesis
            if (a.empty()) {
                return false;  // Unmatched closing parenthesis
            }
            char top = a.top();
            a.pop();
            if ((s[i] == '}' && top != '{') || (s[i] == ']' && top != '[') || (s[i] == ')' && top != '(')) {
                return false;  // Mismatched opening and closing parenthesis
            }
        }
    }

    return a.empty();  // Check  the stack is empty at the end
}
