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
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        int postIndex = postorder.size()-1;
        return build(inorder, postorder, 0, inorder.size()-1, &postIndex);
    }
    
    TreeNode* build(vector<int> inorder, vector<int> postorder, int start, int end, int *postIndex)
    {
        // static int postIndex = inorder.size()-1;
        if(start > end)
            return nullptr;
        
        TreeNode *node = new TreeNode(postorder[*postIndex]);
        (*postIndex)--;
        
        if(start == end)
            return node;
        int inIndex = distance(inorder.begin(), find(inorder.begin(), inorder.end(), node->val));
        node->right = build(inorder, postorder, inIndex+1, end, postIndex);
        node->left = build(inorder, postorder, start, inIndex-1, postIndex);
        
        return node;
    }
};
