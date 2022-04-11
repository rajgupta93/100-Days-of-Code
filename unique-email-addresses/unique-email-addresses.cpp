class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        
        set<string> s;
        
        for(int i=0;i<emails.size();i++)
        {
            string str;
            
            // for(int j=0;j<emails[i].size();j++)
            // {
            int j=0;
            bool plusfound=0;
            
                while(emails[i][j]!='@')
                {
                    if(emails[i][j]!='.')
                    {
                        if(plusfound==0&&emails[i][j]!='+')
                            str+=emails[i][j];
                        else 
                            plusfound=1;

                    }
                    j++;
                }
            
            while(j<emails[i].length())
            {
                str+=emails[i][j];
                j++;
            }
            
            s.insert(str);
            // }
        }
        
        return s.size();
    }
};