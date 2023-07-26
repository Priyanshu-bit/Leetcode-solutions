class Solution {
public:
    int minSpeedOnTime(vector<int>& dist, double hour) {
        
        int l=1;int r= 10000003;
        while(l<r){
            double total_t=0;
           double mid= (l+r)/2;
            for (auto d:dist){
                if (total_t>(int)total_t)total_t=(double)((int)total_t+1);
                total_t+=(double)(d)/(double)(mid);
            }
            if (total_t>hour)l=mid+1;
            else r= mid;
        }
        return (l>10000000?-1:l);
        
    }
};