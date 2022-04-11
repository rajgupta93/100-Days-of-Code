class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        
    
        int m=grid.size();
        int n=grid[0].size();
            k=k%(n*m);
        vector<vector<int>> v(m,vector<int> (n, 0));
        
        while(k--)
       { for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(j<n-1)
                v[i][j+1]=grid[i][j];      
                
                if(i<m-1)
                v[i+1][0]=grid[i][n-1];
                
                
            }
        }
        
        v[0][0]=grid[m-1][n-1];
        
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                grid[i][j]=v[i][j];
            } 
        }
        
        
        }
        return grid;
     
    }
};