// https://leetcode.com/problems/product-of-array-except-self/

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> prefix(n+1, 1);
        vector<int> suffix(n+1, 1);
        int indexB = 1, bottom = 1;
        while(bottom < nums.size()) {
            prefix[indexB] = prefix[indexB-1] * nums[bottom-1];
            bottom++;
            indexB++;
        }
        int indexT = 1, top = nums.size() - 2;
        while(top >= 0) {
            suffix[indexT] = suffix[indexT-1] * nums[top+1];
            top--;
            indexT++;
        }
        vector<int> res(n, 0);
        for(int i = 0; i < nums.size(); i++) {
            res[i] = prefix[i] * suffix[nums.size() - i - 1];
        }
        return res;
    }
};
