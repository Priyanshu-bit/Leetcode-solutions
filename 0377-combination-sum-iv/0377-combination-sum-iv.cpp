class Solution {
public:
    int solve(vector<int>& nums, int target, vector<int>& dp) {
        if (target == 0) return 1; // Found a valid combination.
        if (target < 0) return 0; // No valid combinations.
        if (dp[target] != -1) return dp[target]; // Return memoized result.

        int ways = 0;
        for (int i = 0; i < nums.size(); i++) {
            ways += solve(nums, target - nums[i], dp);
        }

        dp[target] = ways; // Memoize the result for the current target.
        return ways;
    }

    int combinationSum4(vector<int>& nums, int target) {
        vector<int> dp(target + 1, -1);
        return solve(nums, target, dp);
    }
};
