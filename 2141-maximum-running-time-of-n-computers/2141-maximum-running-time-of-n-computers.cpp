class Solution {
public:
    bool isPossible(vector<int>& batteries, long long time, int computers){
        long long totTime = time*computers;
        
        for(long long bTime : batteries)
            totTime -= min(time, bTime);
        
        return (totTime <= 0);//if entire charge for all computers is drained, then we used all batteries, so it's a possible solution
    }
    long long maxRunTime(int n, vector<int>& batteries) {
        long long low = 0, high = 0;
        int si = batteries.size();
        
        for(int i = 0; i < si; i++){
            high += batteries[i];
        }
        
        long long ans = 0;
        while(low <= high){
            
            long long mid = low + (high-low)/2;
            
            if(isPossible(batteries, mid, n)){//asking for max minutes => increase the time to check if that's possible
                ans = mid;
                low = mid+1;
            }
            else{
                 high = mid-1;//if this particular time isn't possible, reduce the range to mid-1
            }
        }
        
        return ans;
    }
	
};