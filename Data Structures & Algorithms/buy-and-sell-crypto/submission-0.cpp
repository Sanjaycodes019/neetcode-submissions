class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0;
        for(int i = 0; i<prices.size(); i++){
            int mn = min(mn, prices[i]);
            int today = prices[i]-mn;
            profit = max(profit, today);
        }
        return profit;
    }
};
