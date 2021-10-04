// https://leetcode.com/problems/combination-sum/

class Solution {
public:
    void getCombs(vector<int> candidates, int target, vector<vector<int>>& res, vector<int> curr, int index, int currSum) {
        if(currSum == target) res.push_back(curr);
        else if(currSum > target) return;
        for(int i = index; i < candidates.size(); i++) {
            curr.push_back(candidates[i]);
            currSum += candidates[i];
            getCombs(candidates, target, res, curr, i, currSum);
            curr.pop_back();
            currSum -= candidates[i];
        }
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> res;
        vector<int> curr;
        getCombs(candidates, target, res, curr, 0, 0);
        return res;
    }
};
