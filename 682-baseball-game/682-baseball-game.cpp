class Solution {
public:
    int calPoints(vector<string>& ops) {
     
        stack<int> s;
        int n=ops.size();
        for(int i=0;i<n;i++)
        {
            if(ops[i]=="C")
                s.pop();
            else if(ops[i]=="D")
            {
                int temp=s.top();
            // s.pop();
            s.push(temp*2);
            }
            else if(ops[i]=="+")
            {
                int t1=s.top();
                s.pop();
                int t2=s.top();
                s.push(t1);
                s.push(t1+t2);
            }
               else
               {
                   // int t= s[i][0]-'0';
                   int a=stoi(ops[i]);
                   s.push(a);
               } 
        }
        int sum=0;
        while(!s.empty())
        {
            sum+=s.top();
            s.pop();
        }
        return sum;
    }
};