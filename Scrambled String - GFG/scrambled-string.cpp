//{ Driver Code Starts
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

//Back-end complete function Template for C++

class Solution{
    public:

        unordered_map<string,bool> mm;
        bool isScramble(string S1, string S2){
     
        if(S1==S2)return true;
        if(mm.find(S1+S2)!=mm.end())return mm[S1+S2];
        int n = S1.length();
        string temp ="";
        for(int i=0;i<n-1;i++)
        {
            temp+=S1[i];
            bool a = isScramble(temp,S2.substr(0,i+1));
            bool b = isScramble(temp,S2.substr(n-i-1,i+1));
            bool c = isScramble(S1.substr(i+1,n-i-1),S2.substr(i+1,n-i-1));
            bool d = isScramble(S1.substr(i+1,n-i-1),S2.substr(0,n-i-1));
            if((a and c) or (b and d))return true;
        }
        return mm[S1+S2]=false;
        }
       
};



//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--){
        string S1, S2;
        cin>>S1>>S2;
        Solution ob;
        
        if (ob.isScramble(S1, S2)) {
            cout << "Yes";
        }
        else {
            cout << "No";
        }
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends