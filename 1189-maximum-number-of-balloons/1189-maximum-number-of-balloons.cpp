class Solution {
public:
    int maxNumberOfBalloons(string s) {
           int B=0; int A=0; int L=0; int O=0; int N=0;
        for(int i =0; i<s.size();i++){
            if(s[i]=='b') B++;
            else if (s[i]=='a') A++;
            else if (s[i]=='l') L++;
            else if (s[i]=='o') O++;
            else if (s[i]=='n') N++;
        }
        
        int x=min(B,min(A,N));
        int y=min(L,O);
        if (2*x>=y) return y/2;
        else return x;
        
    }
};
        
   