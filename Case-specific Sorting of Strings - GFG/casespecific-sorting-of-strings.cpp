//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
    //Function to perform case-specific sorting of strings.
    string caseSort(string str, int n)
    {
        // your code here
        
     string chote="",bde="",ans="";
        for (auto x:str){
            if (isupper(x)){
             bde+=x;   
            }
            else{
                chote+=x;
            }
        }
        sort (bde.begin(),bde.end());
          sort (chote.begin(),chote.end());
          int i=0;
          int j= 0;
          for (auto x:str){
              if (isupper(x)){
                  ans+= bde[i++];
                  
              }
              else {
             ans+= chote[j++];
             
          }}
          return ans;
    }
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		string str;
		cin>>str;
		Solution obj;
		cout<<obj.caseSort (str, n)<<endl;
	}
}
// } Driver Code Ends