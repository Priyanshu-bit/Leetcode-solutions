class Solution {
public:
    
   int subs(string &text1, string &text2, int m, int n, vector<vector<int>> &memo) {
        if (memo[m][n] != -1) return memo[m][n];
        
        if (m == 0 || n == 0)
            memo[m][n] = 0;
        else {
            if (text1[m - 1] == text2[n - 1])
                memo[m][n] = 1 + subs(text1, text2, m - 1, n - 1, memo);
            else
                memo[m][n] = max(subs(text1, text2, m - 1, n, memo), subs(text1, text2, m, n - 1, memo));
        }
        return memo[m][n];
    }
    int longestCommonSubsequence(string text1, string text2) {
        
        int m = text1.length();
        int n=  text2.length();
        vector<vector<int>> memo(m + 1, vector<int>(n + 1, -1)); 
        return subs(text1,text2,m,n,memo);
        
        
        
        
    }
};