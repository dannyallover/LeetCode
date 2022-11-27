// https://leetcode.com/problems/valid-parenthesis-string/

class Solution {
public:
    bool checkValidString(string s) {
        int pLeft = 0, pRight = 0, star = 0;
        for(int i = 0; i < s.size(); i++) {
            if(s[i] == '(') pLeft++;
            else if(s[i] == '*') star++;
            else if(s[i] == ')') pRight++;
            if(pLeft + star < pRight) return false;
        }
        pLeft = 0, pRight = 0, star = 0;
        for(int i = s.size() - 1; i >= 0; i--) {
            if(s[i] == '(') pLeft++;
            else if(s[i] == '*') star++;
            else if(s[i] == ')') pRight++;
            if(pLeft > star + pRight) return false;
        }
        return true;
    }
};
