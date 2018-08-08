class Solution {
public:
    int rob(vector<int>& nums) {
        int length = nums.size();
        if(length == 0)
            return 0;
        if(length == 1)
            return nums[0];
        if(length == 2)
            return max(nums[0], nums[1]);
        
        int dp[length];
        dp[0] = nums[0];
        dp[1] = max(nums[0], nums[1]);
        
        for(int i = 2; i < nums.size(); i++) {
            dp[i] = max(dp[i-1], dp[i-2] + nums[i]);
        }
        
        return dp[nums.size() - 1];
    }
};
