class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> map;
        for(int i = 0; i < nums.size(); i++) {
            int num = nums[i];
            int lookUpNum = target - num;
            if(map.find(lookUpNum) != map.end()) {
                return {map[lookUpNum], i};
            }
            map[num] = i;
        }
        return {-1};
    }
};
