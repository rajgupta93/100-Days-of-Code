class Solution {
public:
    
    int dfs(vector<vector<int>> &grid,int r,int c,int er,int ec,int count)
    {
        
        if(r>=er || c>=ec || r<0 || c<0|| grid[r][c]==0 ) return 0;
        
        grid[r][c]=0;
        
       int x= dfs(grid,r,c-1,er,ec,count);
        int y=dfs(grid,r+1,c,er,ec,count);
       int z= dfs(grid,r,c+1,er,ec,count);
       int t= dfs(grid,r-1,c,er,ec,count);
        
        return (1+x+y+z+t);
        

    }
    
    
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        
        
        int maxi=0;
        int count=0;
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[0].size();j++)
            {
                if(grid[i][j])
                {
                maxi=max(dfs(grid,i,j,grid.size(),grid[0].size(),1),maxi);
                   
                }
            }
        }
        
        return maxi;
    }
};