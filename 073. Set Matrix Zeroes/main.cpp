// https://leetcode.com/problems/set-matrix-zeroes/

class Solution {
public:
    void setRow(vector<vector<int>>& matrix, int r) {
        for(int c = 0; c < matrix[0].size(); c++) {
            matrix[r][c] = 0;
        }
    }
    void setCol(vector<vector<int>>& matrix, int c) {
        for(int r = 0; r < matrix.size(); r++) {
            matrix[r][c] = 0;
        }
    }
    void setZeroes(vector<vector<int>>& matrix) {
        unordered_set<int> x;
        unordered_set<int> y;
        for(int i = 0; i < matrix.size(); i++) {
            for(int j = 0; j < matrix[0].size(); j++) {
                if(matrix[i][j] == 0) {
                    x.insert(i);
                    y.insert(j);
                }
            }
        }
        unordered_set<int> :: iterator it;
        for(it = x.begin(); it != x.end(); it++) {
            int r = (*it);
            setRow(matrix, r);
        }
        for(it = y.begin(); it != y.end(); it++) {
            int c = (*it);
            setCol(matrix, c);
        }
    }
};
