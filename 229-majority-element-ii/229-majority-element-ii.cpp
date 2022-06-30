class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        map<int,int> mp;
        
        for(int i=  0; i < nums.size(); i++) {
            mp[nums[i]]++;
        }
        
        map<int,int>:: iterator itr;
        vector<int> ans;
        for(itr= mp.begin(); itr != mp.end(); itr++ ) {
            if(itr->second > (nums.size()/3)){
                ans.push_back(itr -> first);
            }
        }
        
        return ans;
    }
};