// https://leetcode.com/problems/best-time-to-buy-and-sell-stock/description/

class Solution {
public:
    int maxProfit(vector<int>& prices) {

        int profit = 0;
        int buy = 0, sell = 0;

        if(prices.size() >= 2)
            for (int i = 1; i < prices.size(); i++){

                if(prices[i] > prices[buy]){
                    sell = i;
                    profit = max(profit, prices[sell] - prices[buy]);
                }
                else{

                    buy= i;
                }


            }


        return profit;
        
    }
};