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
    string tree2str(TreeNode* t) {
        string res;
        traverse(t, &res);
        return res;
    }
    void traverse(TreeNode *node, string *res)
    {
        if(!node)
            return;
        *res += to_string(node->val);
        if(node->left)
        {
            *res += "(";
            traverse(node->left, res);
            *res += ")";
        }
        
        if(node->right)
        {
            if(!node->left)
                *res += "()";
            *res += "(";
            traverse(node->right, res);
            *res += ")";
        }
        
    }
};
