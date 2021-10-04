// https://leetcode.com/problems/first-bad-version/

// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        long low = 0;
        long high = n;
        long first = -1;
        while(low <= high) {
            int mid = (low + high) / 2;
            if(isBadVersion(mid)) {
                first = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return first;
    }
};
