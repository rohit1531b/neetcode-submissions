class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxPro = 0, bestBuy = prices[0];
        for(int i=1; i<prices.size(); i++){
            if(prices[i] > bestBuy){  // is case me profit nikal sakta h
                maxPro = max(maxPro, prices[i]-bestBuy);
            }
            bestBuy = min(bestBuy, prices[i]);  // bestBuy ko keep tracking
        }
        return maxPro;
    }
};
