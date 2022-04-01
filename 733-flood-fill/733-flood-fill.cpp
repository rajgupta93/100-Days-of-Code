class Solution {
public:
    
    void flood(vector<vector<int>>& image,int sr,int sc,int oldcolor,int newcolor)
    {
        if(sr<0||sc<0||sr>=image.size()||sc>=image[0].size()||image[sr][sc]!=oldcolor)
    return;
        if(image[sr][sc]==newcolor)
            return;
         image[sr][sc]=newcolor;
        
    flood(image,sr+1,sc,oldcolor,newcolor);
    flood(image,sr-1,sc,oldcolor,newcolor);
    flood(image,sr,sc+1,oldcolor,newcolor);
    flood(image,sr,sc-1,oldcolor,newcolor);

        
    }
    
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
     
        flood(image,sr,sc,image[sr][sc],newColor);
        return image;
    }
};