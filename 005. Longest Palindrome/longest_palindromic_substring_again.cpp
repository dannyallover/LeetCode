class Solution {
public:
    string longestPalindrome(string s) {
        if(s.size() <= 1) {
            return s;
        }
        int center = 0;
        string longestSS = "";
        int low;
        int high;
        // odd
        while(center < s.size() - 1 ){
            low = center;
            high = center;
            //one center
            while(low-1 >= 0 && high+1< s.size() && s[low-1] == s[high+1]) {
                low--;
                high++;
            }
            if((high - low + 1) > longestSS.size()) {
                longestSS = s.substr(low, (high - low + 1));
            }
            low = center;
            high = center+1;
            //two centers
            while(s[center] == s[center+1] && low-1 >= 0 && high+1 < s.size() && s[low-1] == s[high+1]) {
                low--;
                high++;
            }
            if(s[center] == s[center+1] && (high - low + 1) > longestSS.size()) {
                longestSS = s.substr(low, (high - low + 1));
            }
            center++;
        }
        return longestSS;
    }
};
