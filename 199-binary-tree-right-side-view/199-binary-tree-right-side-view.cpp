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
    
    vector<int> levelOrder(TreeNode* root) {
        
        vector<int> ans;
        
        if(!root) return ans;
        
        queue<TreeNode*> q;
        
        q.push(root);
        
        while( !q.empty() ) {
            
            int size=q.size();
            TreeNode *temp= q.front();
            ans.push_back(temp -> val);
           
            while(size--){
                 TreeNode *temp= q.front();
                q.pop();
                if(temp -> right) q.push(temp -> right);
                if(temp -> left) q.push(temp -> left);
                
            }
            
            
        }
        return ans;
        
    }
    
    vector<int> rightSideView(TreeNode* root) {
        
        return levelOrder(root);
    }
};