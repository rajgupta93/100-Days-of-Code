class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
     
        vector<int> chk(nums.begin(), nums.end());
        sort(nums.begin(),nums.end());
        
        int s=0,e=nums.size()-1;
        while(s<e)
        {
            if(nums[s]!=chk[s])
                break;
            else
                s++;
        }
        while(e>s)
        {
            if(nums[e]!=chk[e])
                break;
            else
                e--;
        }
        if(e==s)
            return 0;
        else
        return e-s+1;
        
    }
};