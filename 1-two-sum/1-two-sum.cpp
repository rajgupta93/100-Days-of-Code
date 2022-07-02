class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       
        
        // int i=0;
        int n=nums.size();
        vector<int> ans;
        map<int,int> mp;
        
        for(int i=0; i < n;i++){
            int ele=target-nums[i];
            if(mp.find(ele)!= mp.end()){
                ans.push_back(i);
                ans.push_back(mp[target-nums[i]]);
              
                break;
            }else
            {
               mp.insert({nums[i],i});
              
            }
        }
        
        return ans;
    }
};