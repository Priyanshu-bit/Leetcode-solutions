//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    pair<int,int> endPoints(vector<vector<int>> m, int R, int C){
        //code here
        int i =0;
        int j=0;
        int dir =0;
        //0 for right 
        //1 for dowm
        //2  for left 
        //3 for up
        pair<int ,int>ans;
       
        while (i>=0 and j>=0 and j<C and i<R ){
             ans.first=i;
        ans.second=j;
            if (m[i][j]){
                m[i][j]=0;
                
                if (dir ==0){
                dir=1;
                i++;
                }
            
             else if (dir ==1){
             dir=2;
             j--;}
                 else if (dir ==2){
                 dir=3;
                 i--;}
                 else {
                 dir=0;
                 j++;}
                
        }
            else {
                if (dir==0)j++;
                else if (dir==1)i++;
                else if (dir==2)j--;
                else 
                i--;
                
            }
           
        }
       return ans ; 
    }
};

//{ Driver Code Starts.


int main()
{
    int tc;
	scanf("%d", &tc);
	while(tc--){
		int row, col;
		scanf("%d", &row);
		scanf("%d", &col);
		vector<vector<int>> matrix(row , vector<int> (col));
	 
		for(int i = 0; i < row; i++){
			for(int j = 0; j < col; j++){
			    cin>>matrix[i][j];
			}
		}
		Solution obj;
		pair<int,int> p = obj.endPoints(matrix, row, col);
		
		cout << "(" << p.first << ", " << p.second << ")" << endl;
	}
	return 0;
}
// } Driver Code Ends