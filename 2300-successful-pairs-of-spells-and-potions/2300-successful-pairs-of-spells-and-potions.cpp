class Solution {
public:
    vector<int> successfulPairs(vector<int>& s, vector<int>& p, long long success) {
        
      sort (p.begin(),p.end());
        vector<int>ans;
        for(int i=0;i<s.size();i++)
        {
            long long target = ceil(floor(success)/s[i]);
            int idx = lower_bound(p.begin(),p.end(),target)-p.begin();
            ans.push_back(p.size()-idx);
        }
    return ans;
    }
};