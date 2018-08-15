/*
Written by: dannyallover
Date: 07/25/2018

Description:
Given a 32-bit signed integer, reverse digits of an integer.

Example 1:
Input: 123
Output: 321
Example 2:
Input: -123
Output: -321
Example 3:
Input: 120
Output: 21

Time Complexity: O(n)
Space Complexity: constant
Runtime: My runtime beats 97.19% of c++ solutions.

Note: Assume we are dealing with an environment which could only store integers within the 32-bit signed integer range: [−231,  231 − 1].
For the purpose of this problem, assume that your function returns 0 when the reversed integer overflows.
*/

class Solution {
public:
    int reverse(int x) {
        long rev_num = 0;
        while(x != 0) {
            rev_num = (rev_num * 10) + (x % 10);
            x = x / 10;
        }
        return rev_num > INT_MAX || rev_num < INT_MIN ? 0 : rev_num;
    }
};
