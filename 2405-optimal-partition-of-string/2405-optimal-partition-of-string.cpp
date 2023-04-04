class Solution {
public:
    int partitionString(string s) {
        
        int ans = 1;
        set <char>hm;
        for (auto c:s){
            if (hm.find(c)!=hm.end()){
                hm.clear();
                ans++;
            }
            hm.insert(c);
        }
     return ans;   
    }
};