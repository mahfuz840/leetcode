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
    bool isSymmetric(TreeNode* root) {
        if(!root)
            return true;
        return check(root->left, root->right);
    }
    
    bool check(TreeNode *leftSub, TreeNode* rightSub)
    {
        if(!leftSub && !rightSub)
            return true;
        if(leftSub && rightSub)
        {
            return (leftSub->val == rightSub->val && check(leftSub->left, rightSub->right) && check(leftSub->right, rightSub->left));
        }
        
        return false;
    }
};
