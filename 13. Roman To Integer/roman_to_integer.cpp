class Solution {
public:
    int value(char c) {
        if(c == 'I') return 1;
        if(c == 'V') return 5;
        if(c == 'X') return 10;
        if(c == 'L') return 50;
        if(c == 'C') return 100;
        if(c == 'D') return 500;
        if(c == 'M') return 1000;
    }
    int romanToInt(string s) {
        int number = 0;
        int curHighestValue = value(s[s.length() - 1]);
        for(int i = s.length() - 1; i >= 0; --i) {
            curHighestValue = value(s[i]) > curHighestValue ? value(s[i]) : curHighestValue;
            if(value(s[i]) < curHighestValue) {
                number -= value(s[i]);
            }
            else {
                number += value(s[i]);
            }
        }
        return number;
    }
};
