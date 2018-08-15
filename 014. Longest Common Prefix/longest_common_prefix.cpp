/*
Written by: dannyallover
Date: 08/08/2018

Description:
Write a function to find the longest common prefix string amongst an array of strings.
If there is no common prefix, return an empty string "".

Example 1:
Input: ["flower","flow","flight"]
Output: "fl"
Example 2:
Input: ["dog","racecar","car"]
Output: ""
Explanation: There is no common prefix among the input strings.

Time Complexity: O(S) where S is the sum of the characters in all strings
Space Complexity: O(1)

Runtime: My runtime beats 97.92% of c++ solutions.
*/

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
