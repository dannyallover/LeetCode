class Solution {
public:
    int reverseNumber(int num) {
        long rev = 0;
        while(num > 0) {
            rev *= 10;
            rev += num % 10;
            num /= 10;
        }
        return rev;
    }
    bool isPalindrome(int x) {
        if(x < 0)
            return false;
        if(reverseNumber(x) == x) {
            return true;
        } else {
            return false;
        }
    }
};
