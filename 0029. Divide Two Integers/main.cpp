// https://leetcode.com/problems/divide-two-integers/

class Solution {
public:
    int divide(int dividend, int divisor) {
        int quotient = 0, num = 0;
        int sign = (dividend < 0 && divisor > 0) || (dividend > 0 && divisor < 0) ? -1 : 1;

        unsigned int dividend2 = abs(dividend);
        unsigned int divisor2 = abs(divisor);

        if(dividend == -1*pow(2,31) && divisor == -1) {
            return pow(2,31) - 1;
        }

        int i;
        for(i = 0; i < 31; i++) {
            if((divisor2 << i) >= dividend2) {
                cout << i << endl;
                break;
            }
        }
        for(int j = i; j >= 0; j--) {
            if(num + (divisor2 << j) <= dividend2) {
                num += (divisor2 << j);
                quotient |= (1 << j);
            }
        }
        return sign * quotient;
    }
};
