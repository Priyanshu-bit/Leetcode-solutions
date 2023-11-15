class Solution {
public:
      int maximumElementAfterDecrementingAndRearranging(vector<int>& arr) 
    {
        sort(arr.begin(), arr.end());
        
        int n=arr.size();
        arr[0]=1;
        #pragma unroll
        for(int i=1; i<n ; i++){
            if (arr[i]-arr[i-1]>1)
                arr[i]=arr[i-1]+1;
        }
        return arr.back();
    }
};
auto init = []()
{ 
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    return 'c';
}();