class Solution {
public:
    int dp[51][6];
    
//     int nextele(char c)
//     {
//         if(c=='a')
//             return "5";
//         if(c=='e')
//             return "4";
//         if(c=='i')
//             return "3";
//         if(c=='o')
//             return "2";
//         if(c=='u')
//             return "1";
//         else
//             return "5";
//     }
 
    
    int countvowel(int n,int numchar)
    {
        if(n==0)
        {
           
            return 1;
        }
        
        if(dp[n][numchar]!=-1)
            return dp[n][numchar];
        int count=0;
      for(int i=1;i<=numchar;i++){
          count+=countvowel(n-1,i);
      }
       
        return dp[n][numchar]=count;
    }
    
    int countVowelStrings(int n) {
        
    memset(dp,-1,sizeof(dp));
        
   return    countvowel(n,5);
        // return count;
    }
};