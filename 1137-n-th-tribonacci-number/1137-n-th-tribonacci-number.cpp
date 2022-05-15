class Solution {
public:
    
// int dp[38]={0};
    int tribonacci(int n) {
        
    if(n==0)
        return 0;
    if(n==1 || n==2)
        return 1;
    int prev3=0,prev2=1,prev1=1;
    int trisum=0;
        
    for(int i=3;i<=n;i++)
    {
        trisum=prev3+prev2+prev1;
        prev3=prev2;
        prev2=prev1;
        prev1=trisum;
    }
        return trisum;
    }
};