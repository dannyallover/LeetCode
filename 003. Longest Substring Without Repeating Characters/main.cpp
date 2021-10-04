// https://leetcode.com/problems/longest-substring-without-repeating-characters/

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, bool> letters;
        int first = 0, second = 0;
        int length = s.size();
        int longest = length > 0 ? 1 : 0;
        while(first < length && second < length) {
            if(!letters[s[second]]) {
                letters[s[second]] = true;
                longest = max(longest, second - first + 1);
                second++;
            } else {
                letters[s[first]] = false;
                first++;
            }
        }
        return longest;
    }
};
