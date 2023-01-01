class Solution {
public:
      int gcd(int a,int b){
            
            if (b==0)
                return a;
            else 
                return  gcd(b,a%b);
        }
        
        
    int findGCD(vector<int>& nums) {
   int a=nums[0];
    int b=nums[0];
    for(int i=0; i<nums.size(); i++){
        if(nums[i]<a)
           a=nums[i];
        if(nums[i]>b)
            b=nums[i];
    }
	
    return gcd(a, b);
        
      
        
      
    }
    
};