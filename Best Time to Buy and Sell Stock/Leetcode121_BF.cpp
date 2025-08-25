class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int size = prices.size();
        int curr_profit = 0;
        int max_profit = 0;

        for(int i=0; i<size; i++){
            for(int j=i+1; j<size; j++){ 
                if(prices[j]>prices[i]){  //only if the sell price is greater than the buy price.
                    curr_profit = prices[j] - prices[i];
                    max_profit = max(max_profit,curr_profit);
                }
            }
        }

        return max_profit;
        
    }
};
