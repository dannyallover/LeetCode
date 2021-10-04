// https://leetcode.com/problems/reverse-bits/

class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t n2 = 0;
        for(int i = 0; i < 32; i++) {
            n2 = n2 << 1;
            cout << ((n >> i) & 0x1) << endl;
            n2 = n2 | ((n >> i) & 0x1);
        }
        return n2;
    }
};
