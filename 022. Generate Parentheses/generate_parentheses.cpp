class Solution {
public:
    void buildParanthesis(vector<string>& p, int leftCount, int rightCount, int pivot, int n, string curr) {
        if(leftCount < n - 1)
            buildParanthesis(p, leftCount + 1, rightCount, pivot + 1, n, curr + '(');
        if(rightCount < n && pivot > 0)
            buildParanthesis(p, leftCount, rightCount + 1, pivot - 1, n, curr + ')');
        if(leftCount >= n - 1 && rightCount >= n)
            p.push_back(curr);
    }
    vector<string> generateParenthesis(int n) {
        vector<string> p;
        buildParanthesis(p, 0, 0, 1, n, "(");
        return p;
    }
};
