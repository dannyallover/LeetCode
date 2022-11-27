// https://leetcode.com/problems/counting-bits/

class Solution {
public:
    vector<int> countBits(int num) {
        vector<int> bits;
        for(int i = 0; i <= num; i++) {
            int count = 0;
            unsigned int mask = 0x1;
            for(int j = 0; j < 32; j++) {
                count += ((i >> j) & mask) ? 1 : 0;
            }
            bits.push_back(count);
        }
        return bits;
    }
};
