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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int> > res;
        vector<int> v;
        queue<TreeNode *> q;
        
        if(!root)
            return res;
        q.push(root);
        
        while(!q.empty()) {
            int size = q.size();
            for(int i = 0; i < size; i++) {
                if(q.front()->left)
                    q.push(q.front()->left);
                if(q.front()->right)
                    q.push(q.front()->right);
                
                v.push_back(q.front()->val);
                q.pop();
            }
            
            res.push_back(v);
            v.clear();
        }
        
        reverse(res.begin(), res.end());
        
        return res;
    }
};
