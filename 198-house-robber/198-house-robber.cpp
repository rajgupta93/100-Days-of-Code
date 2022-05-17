class Solution {
public:
    
    int dp[401];
    int robber(vector<int> nums,int n,bool flag){
        
        if(n<=0)  return 0;
        int l=0,r=0;
        
        if(dp[n]!=-1)
            return dp[n];
       
         l=robber(nums,n-2,true)+nums[n-1];
    
        r=robber(nums,n-1,false);
            
        return dp[n]=max(l,r);
        
        
    }
    
    int rob(vector<int>& nums) {
        
        int n=nums.size();
        bool flag=false;
        memset(dp,-1,sizeof(dp));
        return robber(nums,n,flag);
    }
};