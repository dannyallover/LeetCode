/*
Written by: dannyallover
Date: 7/8/2018

Description:
Given an array of integers, return indices of the two numbers such that they add up to a specific target.
You may assume that each input would have exactly one solution, and you may not use the same element twice.

Example:
Given nums = [2, 7, 11, 15], target = 9,
Because nums[0] + nums[1] = 2 + 7 = 9,
return [0, 1].

Notes: unordered_map in c++ is implimented using hash table instead of tree based maps.

Time Complexity: O(n)
Space Complexity: O(n)

Runtime: My runtime beats 100% of cpp submissions
*/

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> hash;
        vector<int> res;
        for(int i = 0; i < nums.size(); i++) {
            int compliment = target - nums[i]; // this is the number we're searching for
            if(hash.find(compliment) != hash.end()) {
                res.push_back(hash[compliment]);
                res.push_back(i);
            }
            else {
                hash[nums[i]] = i; // put in the key,value pair
            }
        }
        return res;
    }
};
