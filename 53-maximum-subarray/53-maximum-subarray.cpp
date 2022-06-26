class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxi=nums[0];
        
        int currmax=nums[0];
        
        for(int i=1;i<nums.size();i++){
            
           
            
            if(nums[i]>currmax+nums[i])
                currmax=nums[i];
            else
                currmax+=nums[i];
            
               if(currmax>maxi)
                maxi=currmax;  
        }
        return maxi;
    }
};