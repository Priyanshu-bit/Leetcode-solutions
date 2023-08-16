//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution{
    public:
    
    
    
    int kadanes(int arr[],int n){
        int sum=0;int maxi= INT_MIN;
        
        
        for (int i=0;i<n;i++){
            sum+=arr[i];
            maxi  = max(maxi,sum);
            if (sum<0)sum =0;
            
        }
        return max(0,maxi);
    }
   int maxOnes(int arr[], int n)
    {
        
        int cnt=0;
        for(int i=0;i<n;i++){
            if (arr[i]==1){
                arr[i]=-1;
                cnt++;
            }else{
                arr[i]=1;
                
            }
            
        }
        return cnt+kadanes(arr,n);
    }
};


//{ Driver Code Starts.
int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n+5];
        for(int i=0;i<n;i++)
            cin>>a[i];
        Solution ob;
        cout<< ob.maxOnes(a, n) <<endl;
    }
    return 0;
}

// } Driver Code Ends