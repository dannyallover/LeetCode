// https://leetcode.com/problems/maximum-subarray/

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum = 0, start = 0, end = 0, m = INT_MIN;
        while(start < nums.size() && end < nums.size()) {
            sum += nums[end];
            m = max(m, sum);
            if(sum < 0) {
                while(start <= end) {
                    sum -= nums[start];
                    start++;
                }
            }
            end++;
        }
        return m;
    }
};
