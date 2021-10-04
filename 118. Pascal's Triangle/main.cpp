// https://leetcode.com/problems/pascals-triangle/

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> p(numRows);
        for(int i = 0; i < numRows; i++) {
            for(int j = 0; j < i+1; j++) {
                int above = i - 1, left = j - 1, right = j;
                if(above > 0 && left >= 0 && right < i) p[i].push_back(p[above][left] + p[above][right]);
                else p[i].push_back(1);
            }
        }
        return p;
    }
};
