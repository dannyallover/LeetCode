class Solution {
public:
    int maxArea(vector<int>& height) {
        int start = 0, end = height.size() - 1;
        int max = INT_MIN;
        int m1 = 0;
        int m2 = 0;
        int water = 0;
        while(start < end) {
            if(height[start] > height[end]) {
                m1 = height[end];
                m2 = end-start;
                end--;
            } else {
                m1 = height[start];
                m2 = end-start;
                start++;
            }
            water = m1 * m2;
            if(water > max) {
                max = water;
            }
        }
        return max;
    }
};
