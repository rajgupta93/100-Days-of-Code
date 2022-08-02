class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        
       vector<int> mat;
        
        for(int i = 0; i < matrix.size(); i++) {
            for(int j = 0;  j < matrix[0].size(); j++) {
                mat.push_back(matrix[i][j]);
            }
        }
        
        sort(mat.begin(), mat.end());
        
        return mat[k-1];
    }
};