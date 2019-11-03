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
    vector<vector<int>> levelOrder(TreeNode* root) {
        queue<TreeNode*> q;
        vector<vector<int>> res;
        if(!root)
            return res;
        q.push(root);
        while(!q.empty())
        {
            vector<TreeNode*> v;
            while(!q.empty())
            {
                TreeNode *temp = q.front();
                q.pop();
                v.push_back(temp);
            }
            
            vector<int> val;
            for(int i = 0; i < v.size(); i++)
            {
                TreeNode *node = v[i];
                    val.push_back(node->val);
                    if(node->left)
                        q.push(node->left);
                    if(node->right)
                        q.push(node->right);
            }
            
            res.push_back(val);
        }
        
        return res;
    }
};
