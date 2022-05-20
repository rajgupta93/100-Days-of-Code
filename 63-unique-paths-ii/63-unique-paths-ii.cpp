class Solution {
public:
    
    int dp[101][101];
    
    int ispath(vector<vector<int>> obstacleGrid,int r,int c,int &count){
        
        if(r==obstacleGrid.size()-1 && c== obstacleGrid[0].size())
        {
        
         return   dp[r][c]=1;
         
        }
        
        if(r>=obstacleGrid.size() || c>= obstacleGrid[0].size() || obstacleGrid[r][c]==1 )
            return 0;
        
        if(dp[r][c]!=-1)
            return dp[r][c];
        
        obstacleGrid[r][c]=1;
return dp[r][c]=ispath(obstacleGrid,r+1,c,count)+ ispath(obstacleGrid,r,c+1,count);

      
    }
    
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int count=0;
        memset(dp,-1,sizeof(dp));
      return    ispath(obstacleGrid,0,0,count);
    }
};