// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    // Function to return a list containing the DFS traversal of the graph.
    void dfs(int V,vector<int> adj[],int s,int isvisited[],vector<int> &v)
    {
        v.push_back(s);
//   cout<<s<<' ';
   isvisited[s]=1;
           for(int i=0;i<adj[s].size();i++)
           {
               if(!isvisited[adj[s][i]])
               {
                  
                   dfs(V,adj,adj[s][i],isvisited,v);
               }
           }
    }
    
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        // Code here
        
        int isvisited[V]={0};
        vector<int> v;
        for(int i=0;i<V;i++){
            if(!isvisited[i])
            dfs(V,adj,i,isvisited,v);
        }
        return v;
    }
};

// { Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >> E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        // string s1;
        // cin>>s1;
        Solution obj;
        vector<int> ans = obj.dfsOfGraph(V, adj);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}  // } Driver Code Ends