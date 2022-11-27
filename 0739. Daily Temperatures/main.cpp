// https://leetcode.com/problems/daily-temperatures/

class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& T) {
        vector<int> ans(T.size(), 0);
        vector<int> next(101, 0);
        for(int i = T.size() - 1; i >= 0; i--) {
            int t = T[i];
            int days = INT_MAX;
            for(int j = t+1; j < 101; j++) {
                if(next[j] > 0) {
                    days = min(days, next[j] - i);
                }
            }
            next[t] = i;
            ans[i] = days == INT_MAX ? 0 : days;
        }
        return ans;
    }
};
