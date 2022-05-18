class Solution {
public:
    
    int bfs(int startnode,vector<int> &visited, vector<pair<int,int>> v[])
    {
        queue<pair<int,int>> q;
        int totaltime=0;
        
        q.push({startnode,0});
        visited[startnode]=0;
        
        while(!q.empty()){
        
            int x=q.front().first;
            int t=q.front().second;
            q.pop();
            for(int i=0;i<v[x].size();i++){
                
               
                if(visited[v[x][i].first]> v[x][i].second + t){
                    
                   // maxtime=max(maxtime,v[temp][i].second);
                    
                    visited[v[x][i].first]= v[x][i].second + t;
                    // visited[v[temp][i].first]=true;
                    q.push({v[x][i].first,visited[v[x][i].first]});
                }
            }
             // totaltime+=maxtime;
            
        }
        int maxi=0;
        for(int i=1;i<visited.size();i++){
            if(visited[i]==INT_MAX)
                return -1;
            maxi=max(maxi,visited[i]);
        }
        return maxi;
        
    }
    
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        
        vector<pair<int,int>> v[n+1];
        
        for(int i=0;i<times.size();i++){
            
            v[times[i][0]].push_back({times[i][1],times[i][2]});
        }
        
        vector<int> visited(n+1,INT_MAX);
        
        return bfs(k,visited,v);
        
    }
};