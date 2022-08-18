class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        
        int miniLength = INT_MAX;
        
        for(int i = 0; i < strs.size(); i++) {
            int size = strs[i].length();
            miniLength = min(miniLength,size);
        }
       
        string count ="";
        
        for(int j = 0; j < miniLength; j++) {
            for(int i = 1; i < strs.size(); i++) {
               if(strs[i][j] != strs[0][j]) return count; 
            }
            count = count + strs[0][j];
        }
        
        
        return count;
        
    }
};