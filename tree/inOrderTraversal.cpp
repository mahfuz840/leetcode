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
    vector<int> inorderTraversal(TreeNode* root) {
        stack<TreeNode*> st;
        vector<int> res;
        
        if(root == nullptr)
            return res;
        
        while(root != nullptr)
        {
            st.push(root);
            root = root->left;
        }
        
        while(!st.empty())
        {
            TreeNode *root = st.top();
            res.push_back(root->val);
            
            st.pop();
            root = root->right;
            
            while(root != nullptr)
            {
                st.push(root);
                root = root->left;
            }
        }
        
        return res;
    }
};
