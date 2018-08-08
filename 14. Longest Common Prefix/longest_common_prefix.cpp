class Solution {
public:
    string getPrefix(string s1, string s2) {
        int i = 0;
        while(i < s1.length() && i < s2.length()) {
            if(s1[i] != s2[i])
                return s1.substr(0,i);
            i++;
        }
        return s1.substr(0,i);
    }
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.size() == 0)
            return "";
        if(strs.size() == 1)
            return strs[0];
        
        string lcPrefix = strs[0];
        for(int i = 1; i < strs.size(); i++) {
            lcPrefix = getPrefix(lcPrefix, strs[i]);
        }
        
        return lcPrefix;
    }
};
