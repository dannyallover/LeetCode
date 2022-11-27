// https://leetcode.com/problems/rectangle-area/

class Solution {
public:
    int computeArea(int A, int B, int C, int D, int E, int F, int G, int H) {
        int length1, width1, length2, width2, length3, width3;
        length1 = abs(A - C);
        width1 = abs(B - D);
        length2 = abs(E - G);
        width2 = abs(F - H);
        if(C < E || A > G || B > H || F > D) {
            cout << "goes in" << endl;
            return (length1*width1) + (length2*width2);
        }
        length3 = abs(min(D, H) - max(B, F));
        width3 =abs(max(A, E) - min(C, G));
        return (length1*width1) + (length2*width2) - (length3*width3);
    }
};
