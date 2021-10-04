// https://leetcode.com/problems/number-complement/

class Solution {
public:
    int findComplement(int num) {
        int lastBit = 0;
        for(int i = 0; i < 32; i++) {
            if((num >> i & 0x1) == 1) lastBit = i;
        }
        int mask = 0;
        for(int i = 0; i <= lastBit; i++) {
            mask = mask | (1 << i);
        }
        return num ^ mask;
    }
};
