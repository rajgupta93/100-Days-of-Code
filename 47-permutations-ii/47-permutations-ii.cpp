class Solution {
public:
    
    void permutation(set<vector<int>> &st,vector<int> curr,int n,vector<int> nums)
    {
        
        
        if(curr.size()==nums.size())
        {
            st.insert(curr);
            return;
        }
            
        for(int i=n-1;i>=0;i--)
        {
            if(nums[i]!=11){
            int temp=nums[i];
            curr.push_back(nums[i]);
            nums[i]=11;
            permutation(st,curr,n,nums);
            curr.pop_back();
            nums[i]=temp;
            }
        }
        
    }
    
    vector<vector<int>> permuteUnique(vector<int>& nums) {
     set<vector<int>> s;
        vector<int> curr;
        permutation(s,curr,nums.size(),nums);
        
        vector<vector<int>> res;
        set<vector<int>>::iterator itr;
        
       for (itr = s.begin(); 
       itr != s.end(); itr++) 
        {
            res.push_back(*itr);
        }
        
        return res;
        
    }
};