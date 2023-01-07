class Solution {
public:
    int maxProfit(vector<int> prices) {
        int maxpro=0;
        int minPrice =INT_MAX;
        int n  = prices.size();
        for (int i=0;i<n;i++){
            minPrice =min(minPrice,prices[i]);
           
                    maxpro=max(maxpro,prices[i]-minPrice);
                
            }
        
        return maxpro;
        
    }
};