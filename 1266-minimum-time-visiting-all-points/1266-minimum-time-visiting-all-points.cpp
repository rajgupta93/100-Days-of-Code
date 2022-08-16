class Solution {
public:
    int minTimeToVisitAllPoints(vector<vector<int>>& points) {
        
        int miniTime = 0;
        
        for(int i = 1; i < points.size(); i++) {
            
            int xdif =  abs(points[i-1][0]-points[i][0]);
            int ydif = abs(points[i-1][1]-points[i][1]);
            
                miniTime += max(xdif,ydif); 
          
        }
        return miniTime;
    }
};