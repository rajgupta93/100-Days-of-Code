// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
public:


    bool isbip(int V,vector<int>adj[],vector<pair<int,int>> &v,int ind)
    {
        queue<int> q;
        
        q.push(ind);
        
        while(!q.empty())
        {
            
            int in=q.front();
            q.pop();
        //   cout<<in<<" ";
            for(int i=0;i<adj[in].size();i++)
            {
                if(v[adj[in][i]].first)
                {
                    if(v[adj[in][i]].second==v[in].second)
                    {
                        
                        return false;
                    }
                }else
                {
            //   cout<<adj[in][i]<<"marked"<<"     ";
                    if(v[in].second==0)
                   v[adj[in][i]]={1,1};
                   else
                    v[adj[in][i]]={1,0};
                    q.push(adj[in][i]);
                   
                }
            }
           
        }
         return true;
    }
    
	bool isBipartite(int V, vector<int>adj[]){
	    // Code here
	    
	     vector<pair<int,int>> v(V,{0,-1});
	    int i=0;
	    for(int i=0;i<V;i++)
	    {
	        if(!v[i].first)
	        {
	           
	            v[i]={1,0};
	            if(!isbip(V,adj,v,i))
	                return false; 
	        }
	    }
	    return true;
	        
	}


};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int V, E;
		cin >> V >> E;
		vector<int>adj[V];
		for(int i = 0; i < E; i++){
			int u, v;
			cin >> u >> v;
			adj[u].push_back(v);
			adj[v].push_back(u);
		}
		Solution obj;
		bool ans = obj.isBipartite(V, adj);    
		if(ans)cout << "1\n";
		else cout << "0\n";  
	}
	return 0;
}  // } Driver Code Ends