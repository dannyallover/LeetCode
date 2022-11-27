// https://leetcode.com/problems/valid-anagram/

class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> sAlphabet(26, 0);
        vector<int> tAlphabet(26, 0);
        for(int i = 0; i < s.size(); i++) sAlphabet[s[i] - 'a']++;
        for(int i = 0; i < t.size(); i++) tAlphabet[t[i] - 'a']++;
        if(sAlphabet == tAlphabet) return true;
        else return false;
    }
};
