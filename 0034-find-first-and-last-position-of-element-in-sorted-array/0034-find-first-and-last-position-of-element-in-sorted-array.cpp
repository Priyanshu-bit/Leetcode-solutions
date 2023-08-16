class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
      int first=-1;
        int last=-1;
     
        
        
        int lo =0;
        int hi = nums.size()-1;
        
        while(lo<=hi){
            int mid= (hi+lo)/2;
            if (nums[mid]==target){
                first=mid;
                hi=mid-1;
            }
            else if (nums[mid]>target)hi=mid-1;
            else lo=mid+1;
        }
          vector<int>ans{-1,-1};
        ans[0]=first;
        if (first==-1) return ans;
          int l=0,h=nums.size()-1;
        while(l<=h){
            int mid= (h+l)/2;
            if (nums[mid]==target){
                last=mid;
                l= mid+1;
            }
            else if (nums[mid]>target)h=mid-1;
            else l=mid+1;
        }
        ans[1]=last;
        return ans;
        
    }
};