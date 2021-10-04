// https://leetcode.com/problems/check-if-it-is-a-straight-line/

class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        if(coordinates.size() == 1) return true;
        double x1 = coordinates[0][0];
        double x2 = coordinates[1][0];
        double y1 = coordinates[0][1];
        double y2 = coordinates[1][1];
        double slope = (y2-y1)/(x2-x1);
        cout << slope << endl;
        for(int i = 1; i < coordinates.size() - 1; i++) {
            for(int j = 0; j < 2; j++) {
                x1 = coordinates[i][0];
                x2 = coordinates[i+1][0];
                y1 = coordinates[i][1];
                y2 = coordinates[i+1][1];
                double s = (y2 - y1)/(x2 - x1);
                cout << s << endl;
                if(slope != s) return false;
            }
        }
        return true;
    }
};
