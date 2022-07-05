class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
      
        
        if(nums.size() ==  0 )  return 0;
        set<int> st;
        
        for(int i = 0; i < nums.size(); i++){
            st.insert(nums[i]);
        }
        
        
        int largest = 0;
        int curr=0;
  
        set<int>:: iterator itr=st.begin();
      
        int prev=*itr;
          itr++;
        for(itr = st.begin(); itr != st.end(); itr++){
            if(prev+1 == *itr) curr++;
            else {
                largest = max(curr ,largest);
                curr = 0;
            }
            prev=*itr;
          
        }
        
        return max(curr+1,largest+1);
    }
};


/*
0, 3, 7, 2, 5, 8, 4, 6, 0, 2



*/