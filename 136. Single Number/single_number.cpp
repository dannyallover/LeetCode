class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int, int> notDuplicate;
        for(int i = 0; i < nums.size(); i++) {
            if(notDuplicate[nums[i]] == 1) {
                notDuplicate.erase(nums[i]);
            }
            else {
                notDuplicate[nums[i]]++;
            }
        }
        return notDuplicate.begin()->first;
    }
};
