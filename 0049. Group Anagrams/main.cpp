// https://leetcode.com/problems/group-anagrams/

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<pair<string, string>> p;
        for(string s: strs) {
            string s2 = s;
            sort(s2.begin(), s2.end());
            p.push_back(make_pair(s2, s));
        }
        sort(p.begin(), p.end());
        vector<vector<string>> ans;
        for(int i = 0; i < p.size(); i++) {
            ans.emplace_back();
            string s = p[i].first;
            while(i < p.size() && p[i].first == s) {
                cout << p[i].first << ", " << p[i].second << endl;
                ans.back().push_back(p[i].second);
                i++;
            }
            i--;
        }
        return ans;
    }
};
