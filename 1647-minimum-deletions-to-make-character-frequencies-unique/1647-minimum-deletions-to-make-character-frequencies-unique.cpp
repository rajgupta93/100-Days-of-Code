class Solution {
public:
    int minDeletions(string s) {
        
        
        priority_queue<int> pq;
        vector<int> v(26,0);
        
        for(int i=0;i<s.length();i++)
        {
            v[s[i]-'a']++;    
        }
        
        for(int i=0;i<26;i++){
            
            if(v[i]!=0)
            pq.push(v[i]);
            
        }
        
     
        int deletecount=0;
         
        
        while(pq.size()>1){
            int topelem=pq.top();
            pq.pop();
          
          if(topelem==pq.top()){
              
              if(topelem-1>0){
                  pq.push(topelem-1);
              }
              deletecount++;
          }
        }
        
        
        return deletecount;
        
    
        }
    
};