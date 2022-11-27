// https://leetcode.com/problems/valid-perfect-square/

class Solution {
public:
    bool isPerfectSquare(int num) {
        int low = 1;
        int high = num;
        while(low <= high) {
            int mid = low + (high - low)/2;
            if((long)mid*mid == num) return true;
            if((long)mid*mid > num) high = mid - 1;
            if((long)mid*mid < num) low = mid + 1;
        }
        return false;
    }
};
