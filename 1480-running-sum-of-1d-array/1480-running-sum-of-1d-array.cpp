class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int rs=0;
       vector <int> temp;
        
        for (int i=0;i<nums.size();i++){
            rs +=nums [i];
            temp.push_back(rs);
        }
      return temp;  
    }
};