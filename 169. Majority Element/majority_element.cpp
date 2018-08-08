class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> count;
        int i = 0;
        while(++count[nums[i]] <= (nums.size()/2))
            i++;
        return nums[i];
    }
};
