class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> map;
        int i = 0;
        int j = 0;
        int distance = 0;
        while(j < s.size()) {
            if(map[s[j]] <= i) {
                map[s[j]] = j + 1;
            }
            else {
                i = map[s[j]];
                map[s[j]] = j + 1;
            }
            distance = max(distance, j - i + 1);
            j++;
        }
        return distance;
    }
};
