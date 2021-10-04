// https://leetcode.com/problems/combinations/

class Solution {
public:
    void comb(int n, int r, int *arr, vector<vector<int>> &allCombs, int length) {
        for(int i = n; i >= r; i--) {
            arr[r-1] = i; // choose the first element here

            // if we still need to choose more
            if(r > 1) {
                // recurse into smaller problems
                comb(i - 1, r - 1, arr, allCombs, length);
            }
            else {
                // store the combination
                vector<int> oneComb;
                for(int i = 0; i < length; i++) {
                    oneComb.push_back(arr[i]);
                }
                allCombs.push_back(oneComb);
            }
        }
    }

    vector<vector<int>> combine(int n, int k) {
        int *arr = new int[k];
        vector<vector<int>> allCombs;
        comb(n, k, arr, allCombs, k);
        return allCombs;
    }
};
