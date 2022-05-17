/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    
    
    TreeNode* gettarget(TreeNode* root,int target)
    {
        if(!root) return root;
        
        if( root->val == target) {return root;}
        
        TreeNode* temp1=gettarget(root->left,target);
        TreeNode* temp2=gettarget(root->right,target);
            
        if(temp1)
            return temp1;
        else
            return temp2;
    }
    
    
//     int getvalue(TreeNode* root,TreeNode* target)
//     {
//         if(!root) return -1;
        
//         if( root->val == target->val) return root;
        
//         int temp1=gettarget(root->left,target);
//         int temp2=gettarget(root->left,target);
            
//         if(temp1!=-1)
//             return temp1;
//         else
//             return temp2;
//     }
    
    
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
    
      return gettarget(cloned, target->val);
        
    }
};