class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char, int> letters;
        for(int i = 0; i < s.length(); i++) {
            letters[s[i]]++;
        }
        int j = 0;
        for(int j = 0; j < s.size(); j++) {
            if(letters[s[j]] == 1)
                return j;
        }
        return -1;
    }
};
