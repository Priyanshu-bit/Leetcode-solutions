//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++

class Solution{
  public:
       int dfs(vector<int> adj[],int node,vector<int> &vis,int &ans){
        if(vis[node])return 0;
        vis[node]=1;
        int kamkarnahai=0;
        for(auto x:adj[node]){
            if(!vis[x]){
                int temp = dfs(adj,x,vis,ans);
                if(temp==0){
                    kamkarnahai=1;
                }
            }
        }
        if(kamkarnahai)ans++;
        return kamkarnahai;
    }
    int countVertex(int N, vector<vector<int>>edges){
        // code here
        vector<int> adj[N+1];
        vector<int> vis(N+1,0);
        for(auto x:edges){
            adj[x[0]].push_back(x[1]);
            adj[x[1]].push_back(x[0]);
        }
        int ans=0;
        dfs(adj,1,vis,ans);
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
        int N;
        cin >> N;
        vector<vector<int>>edges;
        for(int i = 0; i < N-1; i++){
            int x,y;
            cin >> x >> y;
            vector<int> edge;
            edge.push_back(x);
            edge.push_back(y);
            edges.push_back(edge);
        }
        
        Solution ob;
        cout << ob.countVertex(N, edges) << endl;
    }
    return 0; 
} 
// } Driver Code Ends