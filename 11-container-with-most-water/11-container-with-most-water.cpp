class Solution {
public:
    int maxArea(vector<int>& height) {
        
        int start=0;
        int end=height.size()-1;
        int maxheight=0;
        int currhei;
        
        while(start<end)
        {
            currhei=min(height[end],height[start])*(end-start);
            if(currhei>maxheight)
                maxheight=currhei;
            if(height[start]<height[end])
                start++;
            else
                end--;
        }
        return maxheight;
    }
};