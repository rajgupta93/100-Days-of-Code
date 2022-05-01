class Solution {
public:
    bool backspaceCompare(string s, string t) {
     
        stack<char> st,st1;
        
        
        for(int i=0;i<s.size();i++)
            
        {
            if(s[i]!='#')
                st.push(s[i]);
            else
               {
                if(!st.empty())
                st.pop();}
        }
        
         for(int i=0;i<t.size();i++)
            
        {
            if(t[i]!='#')
                st1.push(t[i]);
             else
{
                if(!st1.empty())
                st1.pop();}
        }
        
        
        while(!st.empty() && ! st1.empty())
        {
            if( st.top()!= st1.top())
                return false;
            st.pop();
            st1.pop();
        }
        
        
        if(st.empty() && st1.empty())
            return true;
        
        return false;
        
    }
};