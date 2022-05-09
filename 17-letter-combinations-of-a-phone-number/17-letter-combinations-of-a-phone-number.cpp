class Solution {
public:
    vector<string> letterCombinations(string digits) {
        
     
        vector<string> vs;
        if(digits.length()==0)
            return vs;
        string st="";
        letter(digits,0,st,vs);
        return vs;
    }
    
    
    string mapping(char x)
    {
        if(x=='2')
            return "abc";
        else if(x=='3')
            return "def";
        else if(x=='4')
            return "ghi";
        else if(x=='5')
            return "jkl";
        else if(x=='6')
            return "mno";
        else if(x=='7')
            return "pqrs";
        else if(x=='8')
            return "tuv";
        else 
            return "wxyz";
    }
    
    
    void letter(string digits,int i,string s,vector<string> &vs)
    {
        if(i==digits.length())
        {
            vs.push_back(s);
         
            return;
        }
        
        string mapped=mapping(digits[i]);
        cout<<mapped;
      
        for(int j=0;j<mapped.length();j++){
         
        letter(digits,i+1,s+mapped[j],vs);  
           
        }
   
    }
};