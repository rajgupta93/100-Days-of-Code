class Solution {
public:
    
    
    
    int maxArea(int h, int w, vector<int>& horizontalCuts, vector<int>& verticalCuts) {
     
       sort(horizontalCuts.begin(),horizontalCuts.end());
        sort(verticalCuts.begin(),verticalCuts.end());
        
        horizontalCuts.push_back(h);
        verticalCuts.push_back(w);
       
        int horiprev=0;
        int vertiprev=0;
        
        int maxverti=0;
        int maxhori=0;
        
        for(int i= 0; i < horizontalCuts.size(); i++) {
            maxhori=max(maxhori,horizontalCuts[i]-horiprev);
            horiprev=horizontalCuts[i];
        }
        
        for(int j= 0; j < verticalCuts.size(); j++) {
            maxverti=max(maxverti,verticalCuts[j]-vertiprev);
            vertiprev=verticalCuts[j];
                
            }
        
        
        long long mod= 1000000007;
        return (((maxhori%mod)*(maxverti%mod))%mod);
        
    }
};