/*
Written by: dannyallover
Date: 8/08/2018

Description:
Given a string s, find the longest palindromic substring in s. You may assume that the maximum length of s is 1000.

Example 1:
Input: "babad"
Output: "bab"
Note: "aba" is also a valid answer.
Example 2:
Input: "cbbd"
Output: "bb"

Time Complexity: O(N^2)
Space Complexity: O(1)

Runtime: My runtime beats 32.23% of c++ solutions.
*/

class Solution {
public:
    
    int findPalindrome(string s, int left, int right) {
        // left and right enter,
        if(s[left] != s[right])
            return 0;
        while(left > 0 && right < s.length() && s[left - 1] == s[right + 1]) {
            left--;
            right++;
        }
        return right - left;
    }
    string longestPalindrome(string s) {
        if(s.length() == 0 || s.length() == 1)
            return s;
        
        int start = 0;
        int end = 0;
        for(int i = 0; i < s.length(); i++) {
            int len1 = findPalindrome(s, i, i);
            int len2 = findPalindrome(s, i, i + 1);
            int maxLength = max(len1, len2);
            cout << maxLength << endl;
            if(maxLength > end - start) {
                start = i - (maxLength/ 2);
                end = i + ((maxLength + 1)/ 2);
                if(start < 0)
                    start = 0;
                if(end > s.length())
                    end = s.length();
            }
        }
        return s.substr(start, (end - start + 1));
    }
};
