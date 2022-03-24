class Solution {
public:
    int numRescueBoats(vector<int>& s, int limit) {
        
        sort(s.begin(),s.end());
        int start=0;
        int end=s.size()-1;
        int count=0,curr=0;
        int currlimit;
        while(start<=end)
        {
            currlimit=limit;
            curr=0;
            while(start<=end&&s[end]<=currlimit&&curr<2)
            {
         
                currlimit-=s[end];
                end--;
                curr++;
             
                
            }
            
            while(start<=end&&s[start]<=currlimit&&curr<2)
            {
                   
                currlimit-=s[start];
                start++;
                curr++;
            }
            
            count++;
            
        }
        return count;
    }
};