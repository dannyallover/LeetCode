/*
Written by: dannyallover
Date: 07/25/2018

Description:
Determine whether an integer is a palindrome. An integer is a palindrome when it reads the same backward as forward.

Example 1:
Input: 121
Output: true
Example 2:
Input: -121
Output: false
Explanation: From left to right, it reads -121. From right to left, it becomes 121-. Therefore it is not a palindrome.
Example 3:
Input: 10
Output: false
Explanation: Reads 01 from right to left. Therefore it is not a palindrome.

Time Complexity: O(n)
Space Complexity: constant

Runtime: My runtime beats 95.50% of c++ solutions.

Note: The problem asks if we could solve it without converting the integer to a string? Since I did it this way,
can I do it the other way around?
*/

class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0) {
            return false;
        }
        int num = x;
        int rev = 0;
        while(num != 0) {
            rev = rev * 10 + (num % 10);
            num = num / 10;
        }
  
        if(x == rev)
            return true;
        else
            return false;
    }
};
