class Solution {
public:
    
    int dp[13][10001];
    int coin(vector<int> &coins,int amount,int n)
    {
           if(amount==0)
                return 0;
            if(n==0)
                return INT_MAX-1;
        
        
        if(dp[n][amount]!=-1)
         {
            return dp[n][amount];}
        
        if(coins[n-1]<=amount)
          {
return dp[n][amount]=min(coin(coins,amount-coins[n-1],n)+1,coin(coins,amount,n-1));
        }else   
        return dp[n][amount]=coin(coins,amount,n-1);
    }
    
    int coinChange(vector<int>& coins, int amount) {
        memset(dp,-1,sizeof(dp));
        int ans=coin(coins,amount,coins.size());
      if(ans==INT_MAX-1)
         return -1;
       return ans;
    }
};