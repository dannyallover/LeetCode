// https://leetcode.com/problems/happy-number/

class Solution {
public:
    bool isHappy(int n) {
        unordered_map<int, bool> map;
        int res = n;
        while(map.find(res) == map.end()) {
            map[res] = true;
            int sum = res;
            res = 0;
            while(sum > 0) {
                res += (sum%10)*(sum%10);
                sum /= 10;
            }
            if(res == 1) return true;
        }
        return false;
    }
};
