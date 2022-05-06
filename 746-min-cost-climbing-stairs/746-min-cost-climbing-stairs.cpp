class Solution {
public:
    
 int dp[10001];
    
    int mincost(vector<int> cost,int n)
    {
        if(n==1||n==2)
            {
              
            return cost[n-1];}
   
        if(dp[n-1]!=-1)
        {
            return dp[n-1];
        }
        return dp[n-1]=min(mincost(cost,n-1),mincost(cost,n-2))+cost[n-1];
    }
    
    int minCostClimbingStairs(vector<int>& cost) {
        
    memset(dp,-1,sizeof(dp));
        
        return min(mincost(cost,cost.size()),mincost(cost,cost.size()-1));
      
    }
};