class Solution {
public:
    
    int dp[101][101];
    int noOfPath(int r, int c, int m, int n) {
    
        if(r == m-1 && c == n-1) return 1;
        if(r > m-1 || c > n-1) return 0;
        if(dp[r][c] != -1) return dp[r][c];
        
        return dp[r][c] = (noOfPath(r+1, c, m, n) + noOfPath(r, c+1, m, n));
    }
    
    
    
    int uniquePaths(int m, int n) {
        memset(dp,-1,sizeof(dp));
        return noOfPath(0,0,m,n);
    }
};