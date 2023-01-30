class Solution {
public:
    int tribonacci(int n) {
        if (n==0)
            return 0;
        else if (n==1||n==2)
            return 1;
        else
      {  int loop = n-2;
        int ans =0;int a0=0;
            int a1=1;int a2=1;
        while (loop--){
            
          
            ans = a0+a1+a2;
            a0=a1;
            a1=a2;
            a2=ans;
        } return ans; }
         
    }
};