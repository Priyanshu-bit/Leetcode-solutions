class Solution {
public:
    
//    int subs(string &text1, string &text2, int m, int n, vector<vector<int>> &memo) {
//         if (memo[m][n] != -1) return memo[m][n];
        
//         if (m == 0 || n == 0)
//             memo[m][n] = 0;
//         else {
//             if (text1[m - 1] == text2[n - 1])
//                 memo[m][n] = 1 + subs(text1, text2, m - 1, n - 1, memo);
//             else
//                 memo[m][n] = max(subs(text1, text2, m - 1, n, memo), subs(text1, text2, m, n - 1, memo));
//         }
//         return memo[m][n];
//     }
    int longestCommonSubsequence(string t1, string t2) {
        
//         int m = text1.length();
//         int n=  text2.length();
//         vector<vector<int>> memo(m + 1, vector<int>(n + 1, -1)); 
//         return subs(text1,text2,m,n,memo);
        
      
          int m=t1.length();
        
          int n=t2.length();
        
        
        int dp[m+1][n+1];
        for (int i =0;i<=m;i++){
            dp[i][0]=0;
        }
         for (int j =0;j<=n;j++){
            dp[0][j]=0;
        }
        for (int i=1;i<=m;i++){
            for (int j=1;j<=n;j++){
                if (t1[i-1]==t2[j-1]) dp[i][j]=1+dp[i-1][j-1];
                else dp[i][j]= max(dp[i][j-1],dp[i-1][j]);
            }
        }
        
        
     return dp[m][n];   
        
    }
};