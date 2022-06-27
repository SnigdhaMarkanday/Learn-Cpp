class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int s = prices.size();
        int maxPrice =0;
        int minPrice = INT_MAX;
        for(int i=0;i<s;i++){
            minPrice = min(minPrice,prices[i]);
            maxPrice = max(maxPrice,prices[i]-minPrice);
        }
        return maxPrice;
    }

};
