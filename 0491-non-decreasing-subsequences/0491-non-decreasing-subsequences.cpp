class Solution {
public:
    
    
    set<vector<int>> res;
    vector<int >temp;
    void back (vector<int> &nums ,int index){
if (index==nums.size()){
    if (temp .size()>=2)
        res.insert(temp);
    return;
}
        if(temp.empty ()||temp.back()<=nums[index]){
            temp.push_back(nums[index]);
            back(nums,index+1);
            temp.pop_back();
        }
        back(nums,index+1);
        }
    vector<vector<int>> findSubsequences(vector<int>& nums) {
     back (nums,0);
        return vector(res.begin(),res.end());
    }
};