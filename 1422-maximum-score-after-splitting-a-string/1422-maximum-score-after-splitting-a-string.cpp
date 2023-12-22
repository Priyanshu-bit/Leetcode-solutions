class Solution {
public:
    int maxScore(string& s) {
        int n=s.size(); 
        int sum=count(s.begin()+1, s.end(),'1');
        sum+=(s[0]=='0')?1:0;

        int ans=sum;
        for(int i=1; i<n-1; i++){
            if (s[i]=='0') sum++;
            else sum--;
            ans=max(ans,sum);
        }
        return ans;
    }
};