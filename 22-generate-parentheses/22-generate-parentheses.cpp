class Solution {
public:
    
    
    void allparen(int start,int e,vector<string> &res,string s)
    {
        if(start>e || start<0 || e<0 )
            return;
        if(start==0 && e==0)
            res.push_back(s);
        string temp=s+"(";
        string temp2=s+")";
        allparen(start-1,e,res,temp);
        allparen(start,e-1,res,temp2);

    }
    
    vector<string> generateParenthesis(int n) {
        
        vector<string> res;
        string s="";
        
        allparen(n,n,res,s);
        
        return res;
    }
};