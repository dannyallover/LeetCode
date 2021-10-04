// https://leetcode.com/problems/palindromic-substrings/

class Solution {
public:
    int countSubstrings(string s) {
        int count = s.size();
        for(int i = 0; i < s.size(); i++) {
            // second for loop for substring length
            for(int j = 2; j <= s.size() - i; j++) {
                string sub = s.substr(i, j);
                string rSub = sub;
                reverse(rSub.begin(), rSub.end());
                if(sub == rSub) count++;
            }
        }
        return count;
    }
};
