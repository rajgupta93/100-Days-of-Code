class Solution {
public:
    
  
    int wiggleMaxLength(vector<int>& nums) {
       
        int count=1;
        
        int i=0;
        int n=nums.size();
        
        while(i<n-1){
         if(nums[i+1]>nums[i]) 
        {
            count++;
            while(i<n-1 && nums[i+1]>=nums[i])
                i++;
        }
        else if(nums[i+1]<nums[i])
        {
            count++;
            while(i<n-1 && nums[i+1]<=nums[i]) 
                i++;
        }
        else
            i++;
    }
    return count; 
    }
};