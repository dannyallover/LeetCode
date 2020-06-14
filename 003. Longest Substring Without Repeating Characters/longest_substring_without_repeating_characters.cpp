/*
Written by: dannyallover
Date: 06/13/2020

Description:
Given a string, find the length of the longest substring without repeating characters.

Example:
Given "abcabcbb", the answer is "abc", which the length is 3.
Given "bbbbb", the answer is "b", with the length of 1.
Given "pwwkew", the answer is "wke", with the length of 3. Note that the answer must be a substring, "pwke" is a subsequence and not a substring.

Time Complexity: O(N)
Space Complexity: O(N)
where N is the length of the input string
*/

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
