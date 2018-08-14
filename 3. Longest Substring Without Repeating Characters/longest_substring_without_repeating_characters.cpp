/*
Written by: dannyallover
Date: 7/15/2018

Description:
Given a string, find the length of the longest substring without repeating characters.

Example:
Given "abcabcbb", the answer is "abc", which the length is 3.
Given "bbbbb", the answer is "b", with the length of 1.
Given "pwwkew", the answer is "wke", with the length of 3. Note that the answer must be a substring, "pwke" is a subsequence and not a substring.

Time Complexity: O(N)
Space Complexity: O(min(m,n)), where m is length of the map and n is length of string

Runtime: My runtime beats 91.16% of c++ solutions.
*/

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> map;
        int i = 0;
        int j = 0;
        int distance = 0;
        while(j < s.size()) {
            if(map[s[j]] < 1) {
                map[s[j]]++;
                j++;
            }
            else {
                while(map[s[j]] > 0) {
                    map[s[i]]--;
                    i++;
                }
            }
            distance = max(distance, j-i);
        }
        return distance;
        }
};
