class Solution {
public:
    
    void com(int k,int sum,vector<int> v,vector<vector<int>> &res,int n){
        
        if(sum==0 && k==0)
        {
            res.push_back(v);
            return;
        }
        
        if(n>9)
            return;
        
        if(n>sum)
        {
            
            com(k,sum,v,res,n+1);
            
            
        }else{
        
            
            com(k,sum,v,res,n+1);
              v.push_back(n);
            com(k-1,sum-n,v,res,n+1);
            v.pop_back();
        }
    }
    
    
    vector<vector<int>> combinationSum3(int k, int n) {
        
         vector<int> v;
        vector<vector<int>> res;
        com(k,n,v,res,1);
        return res;
    }
    
    
    
    
};