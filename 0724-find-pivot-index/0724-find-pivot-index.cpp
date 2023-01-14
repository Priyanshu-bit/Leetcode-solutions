class Solution {
public:
    int pivotIndex(vector<int>& n) {
        int sum =0;
        for (int i=0;i<n.size();i++){
                                    
            sum +=n[i];
            
}
        int lsum=0;
        int rsum=sum;
        for (int i=0;i<n.size();i++){
            rsum -=n[i];
            if (lsum==rsum)
                return i;
            lsum+=n[i];
            
        }
        
     return -1;   
    }
};