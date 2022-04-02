class Solution {
public:
    bool validPalindrome(string s) {
        
        int start=0,end=s.length()-1;
        bool isvalid=1;
        
        while(start<end)
        {
            if(s[start]!=s[end])
            {
                break;
            }else
            {
                start++;
                end--;
            }
        }
        
        if(start>=end)
            return true;
       int oldstart=start;
     
        start=start+1;
        int oldend=end;
         while(start<end)
         {
               if(s[start]!=s[end])
            {
                
                break;
            }else
            {
                start++;
                end--;
            }
         }
        
        
        
        if(start>=end)
            return true;
        
        start=oldstart;
        
     
        end=oldend-1;
        
         while(start<end)
         {
               if(s[start]!=s[end])
            {
                break;
            }else
            {
                start++;
                end--;
            }
         }
        
        if(start>=end)
            return true;
        return false;
        
        
    }
};