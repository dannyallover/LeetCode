class Solution {
public:
    bool dfs(vector<vector<int>>& graph, vector<int> &colors, int c, int i) {
        if(colors[i] != -1) { // node has already been visited
            return colors[i] == c;
        }
        
        colors[i] = c;
        
        for(int j: graph[i]) {
            if(!dfs(graph, colors, 1 - c, j)) return false;
        }
        return true;
    }
    
    bool isBipartite(vector<vector<int>>& graph) {
        int n = graph.size();
        vector<int> colors(n, -1); // -1 is no color, 0 is blue, 1 is red
        
        for(int i = 0; i < n; i++) {
            if(colors[i] == -1)
                if(!dfs(graph, colors, 0, i)) return false;
        }
        return true;
    }
};
