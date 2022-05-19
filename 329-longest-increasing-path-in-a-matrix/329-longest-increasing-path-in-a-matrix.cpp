class Solution {
public:
    
    int dp[201][201];
    int longest(vector<vector<int>>& matrix, int r,int c,int prev){
        
        if(r<0 || c<0 || r>= matrix.size() || c>=matrix[0].size() || prev>=matrix[r][c]){
            return 0;
        }
   
        if(dp[r][c]!=-1)
            return dp[r][c];
       int l= longest(matrix,r+1,c,matrix[r][c]);
       int m= longest(matrix,r,c+1,matrix[r][c]);
       int n= longest(matrix,r-1,c,matrix[r][c]);
       int o= longest(matrix,r,c-1,matrix[r][c]);
        return dp[r][c]=max(l,max(m,max(n,o)))+1;                                                              
    }
    
    int longestIncreasingPath(vector<vector<int>>& matrix) {
        
        int maxi=INT_MIN;
   //      cout<<matrix[0].size();
        memset(dp,-1,sizeof(dp));
        
    for(int i=0;i<matrix.size();i++){
    
        for(int j=0;j<matrix[0].size();j++)
        {
            
            maxi=max(maxi,longest(matrix,i,j,INT_MIN));
            // cout<<j;
        
        }
    }
        return maxi;
    }
};