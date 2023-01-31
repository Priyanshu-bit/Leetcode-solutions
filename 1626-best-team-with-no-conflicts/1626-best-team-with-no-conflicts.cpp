class Solution {
public:
    int bestTeamScore(vector<int>& scores, vector<int>& ages) {
        vector<pair<int,int>>arr;
        int n = ages.size();
        for(int i = 0;i < n;i++){
            arr.push_back({ages[i],scores[i]});
        }
        sort(arr.begin(),arr.end(),greater<pair<int,int>>());
        // for(auto it : arr){
        //     cout << it.first << " " << it.second << endl;
        // }
        int dp[1000];
        int ans = 0;
        memset(dp,0,sizeof dp);
        for(int i = 0;i < n;i++){
            for(int j = i;j >= 0;j--){
                if(arr[i].second <= arr[j].second){
                    dp[i] = max(dp[i],dp[j] + arr[i].second);
                    ans = max(ans,dp[i]);
                }
            }
        }
        return ans;
    }
};