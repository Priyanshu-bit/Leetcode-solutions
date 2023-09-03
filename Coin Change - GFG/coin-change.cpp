//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
   
  
     long long int f(int coins[], int n, int a, std::vector<std::vector< long long int>> &dp) {
        if (a == 0) return 1;
        if (n == 0) return 0;
        if (a < 0) return 0;

        if (dp[n][a] != -1) return dp[n][a];

        dp[n][a] = f(coins, n, a - coins[n - 1], dp) + f(coins, n - 1, a, dp);
        return dp[n][a];
    }

    long long int count(int coins[], int n, int amount) {
        std::vector<std::vector< long long int>> dp(n + 1, std::vector< long long int>(amount + 1, -1));
        
        return f(coins, n, amount, dp);
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int sum, N;
        cin >> sum >> N;
        int coins[N];
        for (int i = 0; i < N; i++) cin >> coins[i];
        Solution ob;
        cout << ob.count(coins, N, sum) << endl;
    }

    return 0;
}


// } Driver Code Ends