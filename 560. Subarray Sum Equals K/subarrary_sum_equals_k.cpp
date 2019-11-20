class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> preSums;
        int sum = 0;
        int count = 0;
        preSums[0] = 1;
        for(int i = 0; i < nums.size(); i++) {
            sum += nums[i];
            count += preSums[sum - k];
            preSums[sum]++;
            
        }
        return count;
    }
};
