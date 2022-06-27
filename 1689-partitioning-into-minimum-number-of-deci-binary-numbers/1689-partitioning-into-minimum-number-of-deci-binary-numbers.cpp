class Solution {
public:
    int minPartitions(string n) {
        
        char ans=0;
        for(int i=0;i<n.length();i++){
            
            if(n[i]>ans)
                ans=n[i];
        }
        
        int mini=ans-'0';
        return mini;
    }
};