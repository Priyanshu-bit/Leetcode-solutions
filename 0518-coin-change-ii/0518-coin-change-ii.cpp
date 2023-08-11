class Solution {
public:
    int change(int sum, vector<int>& coins) {
        
    
        vector<long long>dp(sum+1,0);
        dp[0]=1;
        for(int i=0;i<coins.size();i++)
        {
            for(int j=coins[i];j<=sum;j++)
            {
                dp[j]+=dp[j-coins[i]];
            }
            
        }
        return dp[sum];
    }
        
    
};