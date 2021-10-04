// https://leetcode.com/problems/summary-ranges/

class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> ranges;
        if(nums.size() == 0) return ranges;
        string r = "";
        int i = 1;
        for(; i < nums.size(); i++) {
            long x = nums[i];
            long y = nums[i-1];
            long diff = x - y;
            if(diff > 1 && r.length() == 0) {
                ranges.push_back(to_string(nums[i-1]));
            } else if(diff > 1) {
                r  = r + "->" + to_string(nums[i-1]);
                ranges.push_back(r);
                r = "";
            } else if(r.length() == 0) {
                r += to_string(nums[i-1]);
            }
        }
        if(r.length() == 0) r = to_string(nums[i-1]);
        else r = r + "->" + to_string(nums[i-1]);
        ranges.push_back(r);
        return ranges;
    }
};
