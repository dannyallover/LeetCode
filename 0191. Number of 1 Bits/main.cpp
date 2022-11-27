// https://leetcode.com/problems/number-of-1-bits/

class Solution {
public:
    int hammingWeight(uint32_t n) {
        if(!(n & 0xFFFFFFFF)) return 0;
        else if(n & 0x1) return 1 + hammingWeight(n>>1);
        else return hammingWeight(n>>1);
    }
};
