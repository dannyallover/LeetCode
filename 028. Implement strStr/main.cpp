// https://leetcode.com/problems/implement-strstr/

class Solution {
public:
    int strStr(string haystack, string needle) {
        if(haystack.length() < needle.length()) {
            return -1;
        }
        int length = needle.length();
        for(int i = 0; i < (haystack.length() - needle.length() + 1); i++) {
            if(haystack.substr(i,length) == needle) {
                return i;
            }
        }
        return -1;
    }
};
