class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        
        vector<int> nums2;
        int zeroCount = 0;
        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] != 0)
                nums2.push_back(nums[i]);
            else
                zeroCount++;
        }
        for(int i = 0; i < zeroCount; i++) {
            nums2.push_back(0);
        }
        nums = nums2;
    }
};
