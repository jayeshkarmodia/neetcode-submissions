class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int coin = prices[0];
        int profit = 0;
        for(int i = 1; i<prices.size(); i++){
            if(prices[i]>coin){
                profit = max(profit,prices[i]-coin);
            }
            else{
                coin = prices[i];
            }
        }
        return profit;
    }
};
