class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> anagrams;
        unordered_map<string, vector<string>> map;
        for(int i = 0; i < strs.size(); i++) {
            string s = strs[i];
            sort(s.begin(), s.end());
            map[s].push_back(strs[i]);
        }
        for(unordered_map<string, vector<string>>::iterator it = map.begin(); it != map.end(); ++it) {
            anagrams.push_back(it->second);
        }
        return anagrams;
    }
};
