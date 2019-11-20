class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_map<int, bool> numsExist;
        for(int i = 0; i < nums.size(); i++) {
            numsExist[nums[i]] = true;
        }
        int max = 0;
        int temp = 0;
        int curr = 0;
        for(int i = 0; i < nums.size(); i++) {
            curr = nums[i];
            while(numsExist[curr]) {
                curr++;
                temp++;
            }
            if(temp > max)
                max = temp;
            temp = 0;
        }
        return max;
    }
};
