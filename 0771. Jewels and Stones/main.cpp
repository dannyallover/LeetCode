// https://leetcode.com/problems/jewels-and-stones/

class Solution {
public:
    int numJewelsInStones(string J, string S) {
        unordered_map<char, bool> jewels;
        for(int i = 0; i < J.size(); i++) {
            jewels[J[i]] = true;
        }
        int stones = 0;
        for(int i = 0; i < S.size(); i++) {
            if(jewels.find(S[i]) != jewels.end()) stones++;
        }
        return stones;
    }
};
