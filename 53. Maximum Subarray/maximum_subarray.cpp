class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        if(nums.size() == 1) {
            return nums[0];
        }
        int sum = 0;
        int max = nums[0];
        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] > sum + nums[i])
                sum = nums[i];
            else
                sum += nums[i];
            if (sum > max)
                max = sum;
        }
        return max;
    }
};
