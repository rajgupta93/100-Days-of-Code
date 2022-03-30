// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    // Function to detect cycle in a directed graph.
    
    bool iscyclic(int v,vector<int> adj[],int s, vector<int>& isvisited,vector<int>&curr)
    {
        isvisited[s]=1;
        curr[s]=1;
        
        for(int i=0;i<adj[s].size();i++)
        {
            if(!isvisited[adj[s][i]])
            {
               if(iscyclic(v,adj,adj[s][i],isvisited,curr))
                return true;
            }else if(curr[adj[s][i]])
            {
                return true;
            }
            
        }
        curr[s]=0;
            return false;
    }
    
    bool isCyclic(int V, vector<int> adj[]) {
        // code here 
        // bool isvisited[V]={0};
        // bool curr[V]={0};
         vector<int>vis(V,0);
        vector<int>dfs(V,0);
        for(int i=0;i<V;i++)
        {
     if(iscyclic(V,adj,i,vis,dfs))
        return true;
        }
        return false;
    }
};

// { Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        int V, E;
        cin >> V >> E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
        }

        Solution obj;
        cout << obj.isCyclic(V, adj) << "\n";
    }

    return 0;
}
  // } Driver Code Ends