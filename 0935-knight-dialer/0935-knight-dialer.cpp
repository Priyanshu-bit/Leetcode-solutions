class Solution {
public:
int knightDialer(int n) {
int MOD = 1000000007;

    vector<vector<int>> paths= {{4, 6}, {6, 8}, {7, 9}, {4, 8}, {0, 3, 9}, {}, {0, 1, 7}, {2, 6}, {1, 3}, {2, 4}};     
    vector<vector<long>> dp (n+1, vector<long>(10)); 

    for (int j = 0; j < 10; j++)
        dp[1][j] = 1; //populate the base case for n =1
    for (int i = 2; i < n + 1; i++) { // no of steps taken by knight to reach i
        for (int j = 0; j < 10; j++) { // no of digits
            for (int p : paths[j]) { // Previous move of knight in order to reach digit j
                dp[i][j] += dp[i - 1][p]; // cumulatively add from the previous knight move. For instance., F(2, 0) -> F(1,4) +  F(1,6) F(2,6) -> F(1,0) + F(1,1) + F(1,7)
            }
            dp[i][j] %= (int)MOD;
        }
    }
    long sum = 0;
    for (int j = 0; j < 10; j++)
        sum += dp[n][j];
    return (int) (sum % MOD);
    
}
};