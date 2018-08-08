class Solution {
public:
    int maxArea(vector<int>& height) {
        int end = height.size() - 1;
        int start = 0;
        int max = 0, result = 0;
        while(start < end) {
            result = (end - start) * min(height[start], height[end]);
            if(result > max)
                max = result;
            if(height[start] < height[end])
                start++;
            else
                end--;
        }
        return max;
    }
};
