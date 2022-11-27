// https://leetcode.com/problems/backspace-string-compare/

class Solution {
public:
    bool backspaceCompare(string S, string T) {
        stack<char> stackS;
        stack<char> stackT;
        for(int i = 0; i < S.size(); i++) {
            if(S[i] == '#' && !stackS.empty()) stackS.pop();
            else if(S[i] != '#') stackS.push(S[i]);
        }
        for(int i = 0; i < T.size(); i++) {
            if(T[i] == '#' && !stackT.empty()) stackT.pop();
            else if(T[i] != '#') stackT.push(T[i]);
        }
        if(stackS == stackT) return true;
        return false;
    }
};
