class Solution {
public:
    
    int getValue(char x) {
        
        switch(x) {
            case 'I': return 1;
                    break;
            case 'V': return 5;
                    break;
            case 'X': return 10;
                    break;
            case 'L': return 50;
                    break;
            case 'C': return 100;
                    break;        
            case 'D': return 500;
                    break;
            case 'M': return 1000;
                    break;
            default: return 0;
                    break;
        }
    }
 
    int romanToInt(string s) {
        
        
      
        int ans = 0 ;
        int prevVal = -1; 
     for(int i = s.size()-1; i >= 0; i--) {
        
         if(prevVal > getValue(s[i])) {
             ans = ans -  getValue(s[i]);
    
         }else
         {
            ans += getValue(s[i]);   
         }
         prevVal = getValue(s[i]);
           
      }
        
        return ans;
        
    }
};