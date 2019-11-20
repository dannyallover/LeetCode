class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        for(int i = digits.size() - 1; i >= 0; i--) {
            if (digits[i] == 9) {
                if(i == 0) {
                    vector<int> digitsOne(digits.size() + 1, 0);
                    digitsOne[0] = 1;
                    return digitsOne;
                }
                digits[i] = 0;
            }
            else {
                digits[i]++;
                return digits;
            }
        }
        return digits;
    }
};
