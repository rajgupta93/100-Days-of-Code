class Solution {
public:
    
    int dp[101][101];
    
    bool isfound(string s1,string s2,string s3, int a,int b,int c){
        
        if(c==0 ) {
            
            if(a==0 && b==0 )
            return true;
            else return false;
        }
        
        // if(a<=0 && b<=0) return false;
        bool l=false,m=false;
       
        if(dp[a][b]!=-1) return dp[a][b];
        if(b>0 && s3[c-1]==s2[b-1] )
           l=isfound(s1,s2,s3,a,b-1,c-1);
        if(a>0 && s3[c-1]==s1[a-1])
           m=isfound(s1,s2,s3,a-1,b,c-1);
        
        return dp[a][b]=l||m;
        
    }
    
    bool isInterleave(string s1, string s2, string s3) {
        
        memset(dp,-1,sizeof(dp));
        return isfound(s1,s2,s3,s1.length(),s2.length(),s3.length());
    }
};