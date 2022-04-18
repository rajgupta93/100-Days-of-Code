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
    
    int sm=0;
    // int val1;
    int inorder(TreeNode* root,int k)
    {
        if(root==NULL)
            return 0;
       int l= inorder(root->left,k);
        if(++sm==k)
        {
            return root->val;
        }
        
        int r=inorder(root->right,k);
        if(l==0)
            return r;
        else
            return l;
        
    }
    
    int kthSmallest(TreeNode* root, int k) {
    return   inorder(root,k);

    }
};