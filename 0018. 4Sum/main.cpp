// https://leetcode.com/problems/4sum/

class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> quadruplets;
        int i = 0;
        int j = 0;
        int sum = 0;
        sort(nums.begin(), nums.end());

        int low, high = 0;
        int pos = 0;
        while(i < nums.size()) {
            sum = nums[i];
            j = i+1;
            while(j < nums.size()) {
                sum += nums[j];
                low = j+1;
                high = nums.size() - 1;
                while(low < high) {
                    int curr = sum + nums[low] + nums[high];
                    if(curr == target) {
                        quadruplets.push_back({nums[i], nums[j], nums[low], nums[high]});
                        pos = nums[low];
                        do low++; while(nums[low] == pos);
                    }
                    else if(curr < target) {
                        low++;
                    }
                    else if(curr > target) {
                        high--;
                    }
                }
                sum = nums[i];
                pos = nums[j];
                do j++; while(nums[j] == pos);
            }
            pos = nums[i];
            do i++; while(nums[i] == pos);
        }

        return quadruplets;
    }
};
