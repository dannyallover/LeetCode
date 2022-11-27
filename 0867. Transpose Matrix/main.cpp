// https://leetcode.com/problems/transpose-matrix/

class Solution {
    public int[][] transpose(int[][] A) {
        int[][] A_transposed = new int[A[0].length][A.length];
        for(int r = 0; r < A[0].length; r++) {
            for(int c = 0; c < A.length; c++) {
                A_transposed[r][c] = A[c][r];
            }
        }
        return A_transposed;
    }
}
