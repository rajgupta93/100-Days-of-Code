class Solution {
public:
    
    int dis(int x1,int y1,int x2,int y2)
    {
        return abs(x1-x2)+abs(y1-y2);
    }
    
    int minCostConnectPoints(vector<vector<int>>& points) {
        
        int v=points.size();
        
        int key[v];
        bool mst[v];
        
        int count=0;
        
        fill(key,key+v,INT_MAX);
        fill(mst,mst+v,false);
        // fill(parent,parent+v,-1);
        
    key[0]=0;
        
        
        for(int count=0;count<v;count++)
        {
            int mini=INT_MAX,u;
            
            for(int i=0;i<v;i++){
            if(mini>key[i]&&mst[i]==false)
            {
                mini=key[i];
                u=i;
                
            }
            }
          
        
            mst[u]=true;
            
            for(int i=0;i<v;i++)
            {
            
                
int dist=dis(points[u][0],points[u][1],points[i][0],points[i][1]);
                
        //     if(i==v-1&&mst[i]==true)
        // cout<<dist<<" ";
                
                if(mst[i]==false && key[i]>dist){
                    key[i]=dist;
                }
            }
        
            }
int sum=0;        
        for(int i=0;i<v;i++){
            sum+=key[i];
            cout<<key[i]<<" ";
        }
        return sum;
    }
};