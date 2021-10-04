// https://leetcode.com/problems/reverse-integer/

class Solution {
public:
    int reverse(int x) {
        long sum = 0;
        while(x != 0) {
            sum*=10;
            sum+= x % 10;
            x = x / 10;
            if(sum > INT_MAX || sum < INT_MIN) return 0;
        }
        return sum;
    }
};
