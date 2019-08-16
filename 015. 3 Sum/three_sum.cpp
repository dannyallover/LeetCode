class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> res;
        if (nums.size() < 3)
            return {};
        
        sort(nums.begin(), nums.end());
        
        int num1 = 0;
        int sum = 0;
        int duplicate = 0;
        
        int i = 0;
        int j = 0;
        int z = nums.size() - 1;
        while(i < nums.size() - 2) {
            j = i + 1;
            while(j < nums.size() - 1) {
                sum = nums[i] + nums[j] + nums[z];
                duplicate = nums[j];
                if(sum == 0) {
                    res.push_back({nums[i], nums[j], nums[z]});
                    duplicate = nums[j];
                    do j++; while(nums[j] == duplicate);
                }
                if(sum > 0)
                    z--;
                else if(sum < 0)
                    j++;
                if(z <= j)
                    j = nums.size();
            }
            duplicate = nums[i];
            do i++; while(nums[i] == duplicate);
            z = nums.size() - 1;
        }
        
        return res;
    }
};
