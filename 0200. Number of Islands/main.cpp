// https://leetcode.com/problems/number-of-islands/

class Solution {
public:
    void bfs(vector<vector<char>>& grid, int x, int y, int &num, vector<vector<int>> &v) {
        queue<int> xC;
        queue<int> yC;
        xC.push(x);
        yC.push(y);
        while(!xC.empty()) {
            x = xC.front();
            y = yC.front();
            if(v[x][y] == 0) {
                if(x-1 < grid.size() && x-1 >=0 && grid[x-1][y] == '1') {
                    xC.push(x-1);
                    yC.push(y);
                }
                if(y-1 < grid[0].size() && y-1>=0 && grid[x][y-1] == '1') {
                    xC.push(x);
                    yC.push(y-1);
                }
                if(x+1 < grid.size() && grid[x+1][y] == '1') {
                    xC.push(x+1);
                    yC.push(y);
                }
                if(y+1 < grid[0].size() && grid[x][y+1] == '1') {
                    xC.push(x);
                    yC.push(y+1);
                }
            }
            v[x][y] = 1;
            xC.pop();
            yC.pop();
        }
        num++;
    }
    int numIslands(vector<vector<char>>& grid) {
        if(grid.size() == 0 || grid[0].size() == 0) return 0;
        int num = 0;
        vector<vector<int>> v(grid.size(), vector<int>(grid[0].size(), 0));
        for(int i = 0; i < grid.size(); i++) {
            for(int j = 0; j < grid[i].size(); j++) {
                if(grid[i][j] != '0' && v[i][j] == 0) bfs(grid, i, j, num, v);
            }
        }
        return num;
    }
};
