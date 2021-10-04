// https://leetcode.com/problems/top-k-frequent-elements/

class Solution {
public:
    static bool descendingSecondSort(vector<int>& a, vector<int>& b ) {
        return a[1] > b[1];
    }
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> map;
        set<int> numsUnique;
        for(int num : nums) {
            map[num]++;
            numsUnique.insert(num);
        }
        vector<vector<int>> frequencies;
        for(int num : numsUnique) {
            frequencies.push_back({num, map[num]});
        }
        sort(frequencies.begin(), frequencies.end(), descendingSecondSort);
        vector<int> kMostFrequent;
        for(int i = 0; i < k; i++) {
            kMostFrequent.push_back(frequencies[i][0]);
        }
        return kMostFrequent;
    }
};
