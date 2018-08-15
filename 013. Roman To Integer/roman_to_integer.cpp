/*
Written by: dannyallover
Date: ~06/01/2018

Description:
Given n non-negative integers a1, a2, ..., an , where each represents a point at coordinate (i, ai). n vertical lines are drawn such that the two endpoints of line i is at (i, ai) and (i, 0). Find two lines, which together with x-axis forms a container, such that the container contains the most water.
Note: You may not slant the container and n is at least 2.

Example:
Input: [1,8,6,2,5,4,8,3,7]
Output: 49

Time Complexity: O(n)
Space Complexity: O(1)

Runtime: My runtime beats 95.79% of c++ solutions.
*/

class Solution {
public:
    int value(char c) {
        if(c == 'I') return 1;
        if(c == 'V') return 5;
        if(c == 'X') return 10;
        if(c == 'L') return 50;
        if(c == 'C') return 100;
        if(c == 'D') return 500;
        if(c == 'M') return 1000;
    }
    int romanToInt(string s) {
        int number = 0;
        int curHighestValue = value(s[s.length() - 1]);
        for(int i = s.length() - 1; i >= 0; --i) {
            curHighestValue = value(s[i]) > curHighestValue ? value(s[i]) : curHighestValue;
            if(value(s[i]) < curHighestValue) {
                number -= value(s[i]);
            }
            else {
                number += value(s[i]);
            }
        }
        return number;
    }
};
