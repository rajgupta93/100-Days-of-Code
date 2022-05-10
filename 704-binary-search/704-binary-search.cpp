class Solution {
public:
    int search(vector<int>& nums, int target) {
        
        int i=0,j=nums.size()-1,mid=0;
        while(i<=j)
        {
            mid=(i+j)/2;
            if(nums[mid]==target)
            {
                return mid;
            }else if(target>nums[mid]){
                i=mid+1;
            }else 
            {
                j=mid-1;
            }
        }
        return -1;
    }
};