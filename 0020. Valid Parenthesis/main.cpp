// https://leetcode.com/problems/valid-parentheses/

class Solution {
public:
    bool isValid(string s) {

        stack<char> openBrackets;
        for(int i = 0; i < s.length(); i++) {
            if(s[i] == '(' || s[i] == '{' || s[i] == '[') {
                openBrackets.push(s[i]);
                continue;
            }
            else if(openBrackets.empty()) {
                return false;
            }
            else if(s[i] == ')') {
                if(openBrackets.top() != '(')
                    return false;
                else
                    openBrackets.pop();
            }
            else if(s[i] == '}') {
                if(openBrackets.top() != '{')
                    return false;
                else
                    openBrackets.pop();
            }
            else if(s[i] == ']') {
                if(openBrackets.top() != '[')
                    return false;
                else
                    openBrackets.pop();
            }
        }

        return openBrackets.empty();
    }
};
