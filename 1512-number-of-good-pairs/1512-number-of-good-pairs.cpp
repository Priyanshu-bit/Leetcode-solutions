class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
    int cnt[101] = {}, res = 0;
    for (auto n: nums)
        res += cnt[n]++;
    return res;
}
};