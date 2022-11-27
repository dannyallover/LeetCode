// https://leetcode.com/problems/contiguous-array/

class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        vector<int> vec(2*nums.size()+1, -2);
        int count = 0;
        int len = 0;
        vec[count + nums.size()] = -1;
        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] == 0) count--;
            else if(nums[i] == 1) count++;
            if(vec[count + nums.size()] >= -1) len = max(len, i - vec[count + nums.size()]);
            else vec[count + nums.size()] = i;
        }
        return len;
    }
};
