class Solution {
public:
    vector<string> letterCombinations(string digits) {
        vector<string> combs;
        unordered_map<char, string> dict = {
            {'2', "abc"},
            {'3', "def"},
            {'4', "ghi"},
            {'5', "jkl"},
            {'6', "mno"},
            {'7', "pqrs"},
            {'8', "tuv"},
            {'9', "wxyz"}
        };
        int pos = 0;
        string letters = dict[digits[pos]];
        for(int i = 0; i < letters.size(); i++) {
            if(pos + 1 < digits.size())
                recurr(combs, digits, pos + 1, string(1, letters[i]), dict);
            else
                combs.push_back(string(1, letters[i]));
        }
        return combs;
    }
    
    void recurr(vector<string> &combs, string digits, int pos, string currComb, unordered_map<char, string> dict) {
        string letters = dict[digits[pos]];
        for(int k = 0; k < letters.size(); k++) {
            string recurrComb = currComb + letters[k];
            if(pos + 1 < digits.size())
                recurr(combs, digits, pos + 1, recurrComb, dict);
            else
                combs.push_back(recurrComb);
        }
    }
};
