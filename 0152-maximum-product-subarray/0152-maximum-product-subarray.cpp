class Solution {
public:
    int maxProduct(vector<int>& arr) {
         int res=arr[0];
	    
	    int curr_max= res;
	    int curr_min =res;
	    
	    for (int i=1;i<arr.size();i++){
	        if (arr[i]<=0){
	            swap(curr_max,curr_min);
	        }
	        curr_max= max(arr[i],curr_max*arr[i]);
	         curr_min= min(arr[i],curr_min*arr[i]);
	         res =max(curr_max,res);
	    }
	    return res;
	}
        
    
};