/*
Written by: dannyallover
Date: 07/13/2018

Description:
Given a string, find the length of the longest substring without repeating characters.

Example:
Given "abcabcbb", the answer is "abc", which the length is 3.
Given "bbbbb", the answer is "b", with the length of 1.
Given "pwwkew", the answer is "wke", with the length of 3. Note that the answer must be a substring, "pwke" is a subsequence and not a substring.

Time Complexity: O(n)
Space Complexity: O(min(m,n)), where m is length of the longest substring and n is length of string

Runtime: My runtime beats 81.10% of java solutions.
*/

class Solution {
    public int lengthOfLongestSubstring(String s) {
        if(s.equals(""))
            return 0;
        if(s.length()==1)
            return 1;
        int i, j;
        i = 0;
        j = 1;
        int distance = j - i;
        String res = s.substring(i,j);
        String charac = s.substring(j, j+1);
        while(j < s.length()) {
            res = s.substring(i,j);
            charac = s.substring(j, j+1);
            if(res.contains(charac)) {
                i++;
            }
            else {
                j++;
            }
            distance = Math.max(distance, j - i);

        }
        return distance;
    }
}
