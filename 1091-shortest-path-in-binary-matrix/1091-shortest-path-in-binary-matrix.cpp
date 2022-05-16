class Solution {
public:
    
    bool isvalid(int row,int col,int rs,int cs)
    {
        if(row<0 || col<0 || row>= rs || col>=cs)
            return false;
        return true;
    }
    
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        
        int dir[][2]={{1,1},{-1,-1},{0,1},{0,-1},{1,-1},{1,0},{-1,0},{-1,1}};
        
        
        queue<pair<int,int>> q;
        
        if(!grid[0][0]) q.push({0,0});
        int ans=0;
        
        while(!q.empty())
        {
             int size=q.size();
                ans++;
            while(size--){
                
            
              
            pair<int,int> temppair=q.front();
            q.pop();
        
          
           
            
            if(temppair.first== grid.size()-1 && temppair.second== grid[0].size()-1)
                    return ans;
            for(int i=0;i<8;i++){
                
                int row=temppair.first+dir[i][0];
                int col=temppair.second+dir[i][1];
                
                if( isvalid(row,col,grid.size(),grid[0].size()) && !grid[row][col])                     {    grid[row][col]=1;
                    q.push({row,col});}
            }
        }
        }

        return -1;
    }
};