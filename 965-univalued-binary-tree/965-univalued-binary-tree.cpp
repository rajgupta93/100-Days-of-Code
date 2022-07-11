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
    
    bool isUni(TreeNode*  root, int univalue) {
        
        if(!root) return true;
        
        if(root -> val != univalue) return false;
        
        return (isUni(root -> left, univalue) && isUni(root -> right, univalue));
        
    }
    
    bool isUnivalTree(TreeNode* root) {
       
        return isUni(root,root->val);
    }
};