// https://leetcode.com/problems/factorial-trailing-zeroes/

class Solution {
public:
    int trailingZeroes(int n) {
        int t = 0;
        int exp = 1;
        while(pow(5, exp) <= n) t += n / pow(5, exp++);
        return t;
    }
};
