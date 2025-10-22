class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n =  prices.size();
        if (n == 0) {
            return 0;
            
        }
        int profit = 0;
        int min_price = prices[0];

        for (int i = 1; i < n; i++) {
            int curr_price = prices[i] - min_price;
            profit = max(profit, curr_price);
            min_price = min(min_price, prices[i]);
        }
        return profit;
    }
};
