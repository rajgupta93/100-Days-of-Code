class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        
        int low=0,high=nums.size()-1;
        int mid=-1;bool isfound=false;
        vector<int> res;
        while(low<=high)
        {
             mid=(low+high)/2;
            if(nums[mid]==target){
              high=mid-1;
                isfound=true;
                break;
            }else if(nums[mid]>target){
                high=mid-1;
            }else if(nums[mid]<target)
            {
                low=mid+1;
            }
        }

        
         if(!isfound)
        {
            res.push_back(-1);
            res.push_back(-1);
            return res;
        }
        int lastind=high+1;
        int start=0;
        bool istarfound=0;
        
        while(start<=lastind)
        {
            mid=(start+lastind)/2;
            
            if(nums[mid]==target)
            {lastind=mid-1;
                istarfound=true;
            }else
            {
              start=mid+1;  
            }
        }
        
if(istarfound)       
res.push_back(lastind+1);
// else
//     res.push_back(lastind)
//         ;
        
        start=high+1;
        lastind=nums.size()-1;
        
        
           while(start<=lastind)
        {
            mid=(start+lastind)/2;
            
            if(nums[mid]==target)
            {start=mid+1;
                
            }else
            {
              lastind=mid-1;  
            }
        }
        
        res.push_back(start-1);
        
       
                    return res;

//         low =0;
//         high=mid;
        
//         while(low<high)
//         {
//             mid=(low+high)/2;
            
//             if(nums[mid]==target){
//                 low=mid-1;
//             }
//         }
        
        
    }
};