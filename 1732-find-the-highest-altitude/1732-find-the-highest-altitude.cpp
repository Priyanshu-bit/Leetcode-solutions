class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int sum =0;
        vector<int> v;
        int n = gain.size();
        for (int i=0;i<n;i++){
            sum +=gain[i];
            v.push_back(sum);
            
}
        sort(v.rbegin(),v.rend());
        if (v[0]<0){
            return 0;
        }
        else  return v[0];
        
    }
};