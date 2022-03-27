// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    // Function to detect cycle in an undirected graph.
    
    bool isCycleun(int V, vector<int> adj[],int isvisit[],int i)
    {
         
        queue<pair<int,int>> q;
        q.push({-1,i});
        isvisit[i]=true;
        while(!q.empty())
        {
            int x=q.front().second;
            int par=q.front().first;
            q.pop();

            for(int i=0;i<adj[x].size();i++)
            {
                if(!isvisit[adj[x][i]])
                {
                    isvisit[adj[x][i]]=true;
                    q.push({x,adj[x][i]});
                }else
                {
                    if(adj[x][i]!=par)
                    return true;
                    
                }
            }
        }
        return false;
    }
    
    bool isCycle(int V, vector<int> adj[]) {
        // Code here
       int isvisit[V]={0};
       
      for(int i=0;i<V;i++)
      {
          if(!isvisit[i])
    {    if(isCycleun(V,adj,isvisit,i))
            return true;
    }     
      }
      return false;
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
        Solution obj;
        bool ans = obj.isCycle(V, adj);
        if (ans)
            cout << "1\n";
        else
            cout << "0\n";
    }
    return 0;
}  // } Driver Code Ends