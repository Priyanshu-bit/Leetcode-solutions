//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
       string longestPalin (string s) {
        // code here
        int n = s.length();
        vector<vector<int> > dp(n, vector<int> (n));
        
        int maxLen = 1, start = 0;
        for(int i = 0; i < n; i++){
            dp[i][i] = 1;
        }
        
        for(int i = n-1; i >= 0; i--){
            for(int j = i+1; j < n; j++){
                bool condn = (s[i] == s[j]);
                if(condn and j - i < 2){
                    dp[i][j] = 2;
                }else if(condn and dp[i+1][j-1] != 0){
                    dp[i][j] = (2 + dp[i+1][j-1]);
                }
                
                if(dp[i][j] >= maxLen){
                    maxLen = dp[i][j];
                    start = i;
                }
            }
        }
        
        return s.substr(start, maxLen);
    }
};

//{ Driver Code Starts.

int main()
{
    int t; cin >> t;
    while (t--)
    {
        string S; cin >> S;
        
        Solution ob;
        cout << ob.longestPalin (S) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends