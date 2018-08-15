/*
Written by: dannyallover
Date: 8/08/2018

Description:
Given n non-negative integers a1, a2, ..., an , where each represents a point at coordinate (i, ai). n vertical lines are drawn such that the two endpoints of line i is at (i, ai) and (i, 0). Find two lines, which together with x-axis forms a container, such that the container contains the most water.

Note: You may not slant the container and n is at least 2.

Example:
Input: [1,8,6,2,5,4,8,3,7]
Output: 49

Time Complexity: O(2N)
Space Complexity: O(1)

Runtime: My runtime beats 22.99% of c++ solutions.
*/

class Solution {
public:
    int maxArea(vector<int>& height) {
        int end = height.size() - 1;
        int start = 0;
        int max = 0, result = 0;
        while(start < end) {
            result = (end - start) * min(height[start], height[end]);
            if(result > max)
                max = result;
            if(height[start] < height[end])
                start++;
            else
                end--;
        }
        return max;
    }
};
