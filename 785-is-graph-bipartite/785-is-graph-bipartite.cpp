class Solution {
public:
    
    
     bool isbar(vector<vector<int>>& graph,int start,int isvisited[],int set[],int v)
    {
         isvisited[start]=1;
         set[start]=0;
     
         queue<int> q;
          q.push(start);
         
         
         while(!q.empty())
         {
             int ele=q.front();
             q.pop();
         for(int i=0;i<graph[ele].size();i++)
         {
             if(isvisited[graph[ele][i]])
             {
                 if(set[ele]==set[graph[ele][i]])
                 return false;
             }else
             {
                 isvisited[graph[ele][i]]=true;
                 
                 if(set[ele]==0)
                 set[graph[ele][i]]=1;
                 else
                     set[graph[ele][i]]=0;
                 q.push(graph[ele][i]);
             }
         }}
         return true;
        
    }
    
    bool isBipartite(vector<vector<int>>& graph) {
        
        int v=graph.size();
        
       int isvisited[v],set[v];
        
        
      for(int i=0;i<v;i++)
            isvisited[i]=0,set[i]=0;
        
        // fill(isvisited,0,sizeof(isvisited));

        for(int i=0;i<v;i++)
        {
            
            if(!isvisited[i])
            {
                if(isbar(graph,i,isvisited,set,v)==false)
                return false;
            // cout<<i<<" "; 
            }
          
        }
        return true;

    }
};