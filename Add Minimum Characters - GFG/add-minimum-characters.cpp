//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++

class Solution{   
public:
    int addMinChar(string str)
    {    
       int  n= str.length();
       int i=0;
       int  j=n-1;
       int ans=0;
       while(i<=j){
           if(str[i]==str[j]){
               i++;
               j--;
           }
           else{
               ans++;// add one character
               i=0;
               j=n-1-ans;//last two charater are satisfied we ans varible 
               
           }
       }
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
        string str;
        cin >> str;
        
        Solution ob;
        cout << ob.addMinChar(str) << endl;
    }
    return 0; 
} 
// } Driver Code Ends