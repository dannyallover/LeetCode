// https://leetcode.com/problems/majority-element/

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int, int> m;
        for(int i = 0; i < nums.size(); i++) {
            if(++m[nums[i]] > (n/2)) return nums[i];
        }
        return -1;
    }
};
