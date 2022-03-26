// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        // Code here
        bool visited[V]={0};
        vector<int> v;
        queue<int> q;
        q.push(0);
        
        // for(int i=0;i<V;i++)
        // {
            // if(!visited[i])
            // {
            //     visited[i]=1;
            //     v.push_back(i);
            //     for(int j=0;j<adj[i].size();j++)
            //     {
            //         q.push(adj[i][j]);
            //     }
            // }
            
            while(!q.empty())
            {
                int temp=q.front();
                q.pop();
                
                visited[temp]=true;
                  v.push_back(temp);
                for(int i=0;i<adj[temp].size();i++){
                 if(!visited[adj[temp][i]])
                {
                    visited[adj[temp][i]]=1;
                    q.push(adj[temp][i]);
                 
                }
            }}

    return v;
    }
};

// { Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >>

            E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            // 		adj[v].push_back(u);
        }
        // string s1;
        // cin>>s1;
        Solution obj;
        vector<int> ans = obj.bfsOfGraph(V, adj);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}  // } Driver Code Ends