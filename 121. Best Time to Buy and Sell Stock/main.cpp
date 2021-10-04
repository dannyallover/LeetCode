// https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minVal = INT_MAX;
        int maxProfit = 0;
        for(int i = 0; i < prices.size(); i++) {
            if(prices[i] < minVal) {
                minVal = prices[i];
            }
            if(prices[i] - minVal > maxProfit) {
                maxProfit = prices[i] - minVal;
            }
        }
        return maxProfit;
    }
};
