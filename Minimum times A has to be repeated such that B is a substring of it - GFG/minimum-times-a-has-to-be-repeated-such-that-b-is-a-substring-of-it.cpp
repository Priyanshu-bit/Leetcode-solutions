//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
public:
    static int minRepeats(string A, string B) {
        // code here
        int count =1;
        string rep =A;
        while (rep.length()<B.length()){
            rep +=A;
            count++;
            
        }
        if (rep.find(B) != string::npos) 
        return count ;
        
        rep +=A;
        if (rep.find(B) != string::npos) 
        return count+1;
        
        
        return -1;

    }  							

     };

//{ Driver Code Starts.

int main() {
    int t;
    scanf("%d ",&t);
    while (t--) {
        string A,B;
        getline(cin,A);
        getline(cin,B);

        Solution ob;
        cout << ob.minRepeats(A,B) << endl;
    }
    return 0;
}
// } Driver Code Ends