class Solution {
public:
    
     int dp[101][101];
    
     int uniquePath(int m, int n) {
         if(m < 1  || n < 1 ) return 0;
        if(m == 1 && n == 1) return 1;
         
         if(dp[m][n]!=-1) return dp[m][n]; 
         return dp[m][n]=uniquePath(m-1,n) + uniquePath(m,n-1);
    }
  
    
    int uniquePaths(int m, int n) {
   
        memset(dp,-1,sizeof(dp));
        return uniquePath(m,n);
        
    }
};