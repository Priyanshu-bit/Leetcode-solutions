class Solution {
public:
    bool isPalindrome(int x) {
        
    if (x==0){
        return true;
    }
        if (x<0|| x%10==0){
            return false;
        }
        int i=x;
       unsigned int rev =0;
        while (i!=0){
            unsigned int rem = i%10;
            i=i/10;
            rev=rev*10+rem;

            
        }
        if(x==rev) {return true;}
        else {return false;}
    }
};