class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char,int> map;
        for(int i = 0; i < s.length(); i++) {
            map[s[i]]++;
        }
        int longest = 0;
        bool single = false;
        int amount = 0;
        for(int i = 0; i < s.length(); i++) {
            amount = (map[s[i]] / 2) * 2;
            if(map[s[i]] % 2 != 0)
                single = true;
            longest += amount;
            map[s[i]] = 0;
        }
        if(single)
            longest++;
        
        return longest;
    }
};
