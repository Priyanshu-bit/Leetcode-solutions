class Solution {
public:
   double average(vector<int>& salary) {
        int mi=INT_MAX,ma=INT_MIN,s=0;
        for(auto i:salary)mi=min(mi,i),ma=max(ma,i),s+=i;
        return (s-ma-mi)*1.0/(salary.size()-2);
    }
};