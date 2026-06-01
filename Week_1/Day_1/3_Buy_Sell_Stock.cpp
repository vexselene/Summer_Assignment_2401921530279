class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min = 0;
        int maxProfit = 0;
        int i = 1;
        while (i < prices.size()) {
            int profit = prices[i] - prices[min];
            maxProfit = std::max(maxProfit, profit);
           if (prices[i] < prices[min]) min = i;
            i++;
        } return maxProfit;
    }
};