/*
Written by: dannyallover
Date: 8/15/2018

Description:
Given a string s, find the longest palindromic substring in s. You may assume that the maximum length of s is 1000.

Example 1:
Input: "babad"
Output: "bab"
Note: "aba" is also a valid answer.
Example 2:
Input: "cbbd"
Output: "bb"

Time Complexity: O(n^2)
Space Complexity: O(n^2)
Runtime: My runtime beats 43.53% of c++ solutions.
*/

class Solution {
public:
    string longestPalindrome(string s) {
        int size = s.length();
        if(size == 0)
            return "";
        bool table[size][size];
        memset(table, false, sizeof(table));
        
        // init table
        for(int i = 0; i < size; i++) {
            table[i][i] = true;
            if(i == size - 1)
                break;
            table[i][i+1] = (s[i] == s[i+1]);
        }
        
        // fill in the rest of the table
        for(int i = size - 3; i >= 0; i--) {
            for(int j = i + 2; j < size; j++) {
                table[i][j] = (s[i] == s[j] && table[i + 1][j - 1]);
            }
        }
        
        // find the longest palindromic substring
        int max = 0;
        string longestPal = "";
        for(int i = 0; i < size; i++) {
            for(int j = i; j < size; j++) {
                if(table[i][j] == true) {
                    if(j - i + 1 > max) {
                        max = j - i + 1;
                        longestPal = s.substr(i, max);
                    }
                }
            }
        }
        return longestPal;
    }
};
