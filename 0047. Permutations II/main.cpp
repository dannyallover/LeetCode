// https://leetcode.com/problems/permutations-ii/

class Solution {
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        //find all permutations using backtracking, use erase/unique
        //find all permutations using next_permutations, sort them/put them in a set

        vector<vector<int>> perms;
        set<vector<int>> uniquePerms;
        sort(nums.begin(), nums.end());
        uniquePerms.insert(nums);

        while(next_permutation(nums.begin(), nums.end())) {
            uniquePerms.insert(nums);
        }

        for(vector<int> x: uniquePerms) {
            perms.push_back(x);
        }

        return perms;
    }
};
