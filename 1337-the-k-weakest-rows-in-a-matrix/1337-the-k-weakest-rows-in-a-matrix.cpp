class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        
        vector<vector<int>> v;
        
        for(int i=0;i<mat.size();i++)
        {
            int count=0;
         for(int j=0;j<mat[0].size();j++)
         {
             if(mat[i][j]==1)
             count++;
             
         }   vector<int> res;
            res.push_back(count);
            res.push_back(i);
            v.push_back(res);
            
        }
        
        sort(v.begin(),v.end());
        
        vector<int> result;
        
        for(int i=0;i<k;i++)
        {
        
            result.push_back(v[i][1]);
        }
        return result;
    }
};