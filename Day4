class Solution {
    public:
    bool checkmate(int a, int b, int x, int y){
        // code here
        
        if(a==x||b==y)
        return 0;
   
        
        int pos1=a,pos2=b;
        
      while(pos1<=8&&pos2<=8)
        {
            if(pos1==x&&pos2==y)
           { return 0;
           
              
           }
            
                pos1++;
                pos2++;
            
        }
        
            pos1=a;
            pos2=b;
            
            while(pos1>0&&pos2>0)
        {
            if(pos1==x&&pos2==y)
            return 0;
           
            pos1--;
            pos2--;
            
            
            
            
        }
        pos1=a;
        pos2=b;
        
        
         while(pos1>0&&pos2<=8)
        {
            if(pos1==x&&pos2==y)
            return 0;
            else
            {
                pos1--;
                pos2++;
            }
           
        
        
    }
     pos1=a;
            pos2=b;
            
     while(pos1<=8&&pos2>0)
        {
            if(pos1==x&&pos2==y)
            return 0;
            else
            {
                pos1++;
                pos2--;
            }
        }
        return 1;
        }
        
            
};
