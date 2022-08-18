class Solution {
public:
    int minSetSize(vector<int>& arr) {
     
        map<int,int> mp;
        int size = arr.size();
        int n = 0;
        int count = 0;
        for(int i = 0; i < arr.size(); i++) {
            mp[arr[i]] ++;
        }
        
        
        
      map<int,int> valmp;
        
        for(auto itr: mp) {
           valmp[itr.second] ++;
            // cout << valmp[itr.second]<<' ';
        }
        
         map<int, int>::reverse_iterator it;
 
        for (it = valmp.rbegin(); it != valmp.rend(); it++) {
      
            if(n  + (it -> first * it->second) >= size/2 ) {
            cout << ceil((size/2.0 - n));
                
                count = count + ( ceil((size/2.0 - n)/ (it -> first)));
              
                return count;
            }else
            {
                n  = n + (it -> first * it -> second);
                  count = count + ( it->second);
            }
    
    }
        
        
        
       
        
        
      
        return count;
        
    }
};