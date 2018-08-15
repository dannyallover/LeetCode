/*
Written by: dannyallover
Date: ~06/01/2018

Description:
Given a roman numeral, convert it to an integer. Input is guaranteed to be within the range from 1 to 3999.

Example 1:
Input: "III"
Output: 3
Example 2:
Input: "IV"
Output: 4
Example 3:
Input: "IX"
Output: 9
Example 4:
Input: "LVIII"
Output: 58
Explanation: C = 100, L = 50, XXX = 30 and III = 3.
Example 5:
Input: "MCMXCIV"
Output: 1994
Explanation: M = 1000, CM = 900, XC = 90 and IV = 4.

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
