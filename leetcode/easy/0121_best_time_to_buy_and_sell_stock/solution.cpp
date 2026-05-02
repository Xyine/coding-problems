#include <vector>
#include <algorithm>


class Solution {
public:
    int maxProfit(std::vector<int>& prices) {
       int profit = 0;
       int buy_price = prices[0];
       for (int i = 1; i < prices.size(); i++) {
            buy_price = std::min(buy_price, prices[i]); 
            profit = std::max(profit, prices[i] - buy_price); 
    } 
       return profit; 
    }
};
