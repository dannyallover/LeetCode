class Solution {
public:
    bool isPalindrome(string s) {
        string alphasOnly = "";
        for(int i = 0; i < s.length(); i++) {
            if(isalnum(s[i]))
                alphasOnly += tolower(s[i]);
        }
                
        string before = alphasOnly;
        reverse(alphasOnly.begin(), alphasOnly.end());
        if(before == alphasOnly)
            return true;
        else
            return false;
    }
};
