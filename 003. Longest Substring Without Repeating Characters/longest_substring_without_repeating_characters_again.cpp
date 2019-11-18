class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int size = s.size();
        unordered_map<char, bool> map;
        int low = 0;
        int high = 0;
        int longest = 0;
        while(high < size) {
            if(!map[s[high]]) {
                map[s[high]] = true;
            } else {
                while(s[low] != s[high]) {
                    map[s[low]] = false;
                    low++;
                }
                low++;
            }
            high++;
            if(high - low > longest) {
                longest = high - low;
            }
        }
        return longest;
    }
};
