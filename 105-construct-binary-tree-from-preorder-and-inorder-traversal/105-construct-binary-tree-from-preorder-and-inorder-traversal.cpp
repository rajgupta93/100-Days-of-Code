/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    
 
    TreeNode*  helper(vector<int>& pre, vector<int>& in, int left, int right, int& idx) {
        
        if(left > right ) 
        return NULL;    
            
        int pivot = left;
            
        while(pre[idx] != in[pivot])       pivot++;
         
            
            TreeNode * node = new TreeNode(pre[idx]);
            idx++;
        
            node -> left = helper(pre, in, left, pivot-1,  idx);
            node -> right = helper(pre, in, pivot+1, right, idx);
            
            return node;
            
        }
        
        
        
       
        
        
        
        
    
    
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
     
        int i=0;
       return  helper(preorder, inorder, 0, preorder.size()-1, i);
        
    }
    
/*

preorder -> 3, 9, 20, 15, 7
inorder -> 9, 3, 15, 20, 7 


*/
};