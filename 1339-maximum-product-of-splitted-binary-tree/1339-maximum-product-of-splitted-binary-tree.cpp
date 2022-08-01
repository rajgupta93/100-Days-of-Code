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

#define mod 1000000007

class Solution {
public:

    long long sumOfBinaryTree(TreeNode* root) {
        if(!root) return 0;
        return (root -> val + sumOfBinaryTree(root -> left ) + sumOfBinaryTree( root -> right));
    }

    long long postOrderTrav(TreeNode* root,long sum,  long long &maxsum) {

        if(!root) return 0;
        long long lSum= postOrderTrav(root -> left,sum,maxsum);
        maxsum =  max(maxsum,   (sum - lSum)   * lSum) ;
        long long RSum= postOrderTrav(root -> right,sum,maxsum);
        maxsum =  max(maxsum, (sum - RSum) * RSum);
        return (RSum+ lSum + root -> val);
    }

    int maxProduct(TreeNode* root) {
        long long sum = sumOfBinaryTree(root);
        long long  maxsum =0;
        postOrderTrav(root, sum, maxsum);
        return (int)(maxsum%mod);
    }
};