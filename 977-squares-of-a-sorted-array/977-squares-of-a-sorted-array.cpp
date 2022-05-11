class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        
        int i=-1,j=0;
        vector<int> res;
        int n=nums.size();
        for(j=0;j<n;j++)
        {
            if(nums[j]>0)
                break;
        }
    
    
     if(j!=0)
        i=j-1;
    
        while(j<n && i>=0)
        {
            if(abs(nums[i])<nums[j]){
                res.push_back(nums[i]*nums[i]);
                i--;
            }else
            {
                res.push_back(nums[j]*nums[j]);
                j++;
            }
        }
    
        while(j<n){
          res.push_back(nums[j]*nums[j]);
                j++;  
        }
    
        while(i>=0)
        {
            res.push_back(nums[i]*nums[i]);
                i--;
        }
    return res;
    }
};