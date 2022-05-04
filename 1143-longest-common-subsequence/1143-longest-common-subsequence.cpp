class Solution {
public:
    
    int dp[1001][1001];
    
    Solution()
    {
          memset(dp,-1,sizeof(dp));
    }
    

int lcs(string &x, string &y,int n,int m)
    {
            
        if(n==0||m==0)
            return 0;
            
        if(dp[n][m]!=-1)
        {
        
            return dp[n][m];
        }
        // if(x[n-1]==y[m-1])
        // {
        //  return dp[n][m]=lcs(x,y,n-1,m-1)+1;   
        // }else
        // {
        //     return dp[n][m]=max(lcs(x,y,n-1,m), lcs(x,y,n,m-1));
        // }
    
       if(x[n-1]==y[m-1])   // if elements at last index are same then length of common subsequence =1 and then recursively call for n-1 length string
            return dp[n][m]= 1+lcs(x,y,n-1,m-1);
        else 
            return dp[n][m]=max(lcs(x,y,n,m-1),lcs(x,y,n-1,m)); // if not same recursively call for m length string n-1 length and m-1 length and n length and return the max between them
        return dp[n][m];
  
             
    }
    
    int longestCommonSubsequence(string text1, string text2) {
      int n=text1.size();
      int m=text2.size();
        
        return lcs(text1,text2,n,m);
      
    }
};