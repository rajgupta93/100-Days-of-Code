class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        stack<int> pos;
        queue<int> neg;
        vector<int> res;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<0)
                neg.push(nums[i]);
            else
                pos.push(nums[i]);
        }
        
        
        while(!neg.empty() && !pos.empty()){
            
            if(abs(neg.front())<pos.top()){
                res.push_back(pos.top()*pos.top());
                 pos.pop();
            }else{
                
                 res.push_back(neg.front()*neg.front());
                neg.pop();
            }
        }
        
        
        while(!neg.empty())
        {
             res.push_back(neg.front()*neg.front());
                neg.pop();
        }
        
        while(!pos.empty())
        {
            res.push_back(pos.top()*pos.top());
                 pos.pop();
            } reverse(res.begin(),res.end());
        return res;
    }
};