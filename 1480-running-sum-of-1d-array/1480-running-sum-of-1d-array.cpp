class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        
        int sumtillnow=0;
        
        for(int i=0;i<nums.size();i++){
            
            sumtillnow+=nums[i];
            nums[i]=sumtillnow;
            }
        
        
        return nums;
    }
};