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
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int preIndex = 0;
        return build(preorder, inorder, 0, inorder.size()-1, &preIndex);
    }
    
    TreeNode* build(vector<int> preorder, vector<int> inorder, int start, int end, int* preIndex)
    {
        // static int preIndex = start;
        
        if(start > end)
            return nullptr;
        
        TreeNode *node = new TreeNode(preorder[*preIndex]);
        (*preIndex)++;
        if(start == end)
            return node;
        
        int inIndex = distance(inorder.begin(), find(inorder.begin(), inorder.end(), node->val));
        
        node->left = build(preorder, inorder, start, inIndex-1, preIndex);
        node->right = build(preorder, inorder, inIndex+1, end, preIndex);
        return node;
    }
};
