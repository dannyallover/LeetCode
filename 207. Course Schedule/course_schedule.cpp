class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        // construct graph
        vector<vector<int>> graph(numCourses);
        for(int i = 0; i < prerequisites.size(); i++) {
            graph[prerequisites[i][1]].push_back(prerequisites[i][0]);
        }
        vector<int> inDegree(numCourses, 0);
        for(int i = 0; i < numCourses; i++) {
            for(auto it = graph[i].begin(); it!=graph[i].end(); it++) inDegree[*it]++;
        }
        // bfs (topological sort)
        for(int i = 0; i < numCourses; i++) {
            // find node that has indegree 0
            // that's the next one we want to traverse in a bfs
            int j;
            for(j = 0; j < numCourses && inDegree[j] != 0; j++);
            if(j == numCourses) return false; // if we don't find a node with indegree 0, then we have a cycle, b/c -1 nodes are marked as visited
            inDegree[j] = -1; // mark as visited
            // basically detach this node from all its outgoing nodes
            for(auto it = graph[j].begin(); it!=graph[j].end(); it++) inDegree[*it]--;
        }
        return true;
    }
};
