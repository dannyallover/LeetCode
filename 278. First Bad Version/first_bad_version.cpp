// Forward declaration of isBadVersion API.
bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        
        int low = 0;
        int high = n;
        int guess = 0;
        while(low <= high) {
            guess = low + (high - low) / 2;
            if(isBadVersion(guess) == true)
                if(isBadVersion(guess - 1) == false)
                    return guess;
                else
                    high = guess - 1;
            if(isBadVersion(guess) == false)
                if(isBadVersion(guess + 1) == true)
                    return guess + 1;
                else
                    low = guess + 1;
        }
    }
};
