// https://leetcode.com/problems/minimum-path-sum/

class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        if(!grid.size() || !grid[0].size()) return 0;
        int height = grid.size();
        int width = grid[0].size();
        vector<vector<int>> dp(height, vector<int>(width));
        for(int i = 0; i < height; i++) {
            for(int j = 0; j < width; j++) {
                if(i-1 >= 0 && j-1 >= 0) dp[i][j] = grid[i][j] + min(dp[i-1][j], dp[i][j-1]);
                else if(i-1 >= 0) dp[i][j] = grid[i][j] + dp[i-1][j];
                else if(j-1 >= 0) dp[i][j] = grid[i][j] + dp[i][j-1];
                else dp[i][j] = grid[i][j];
            }
        }
        return dp[height-1][width-1];
    }
};
