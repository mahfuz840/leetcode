/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/
class Solution {
public:
    int maxDepth(Node* root) {
        if(!root)
            return 0;
        
        int depth = 0;
        queue<Node *> q;
        
        q.push(root);
        
        while(!q.empty()) {
            int size = q.size();
            
            for(int i = 0; i < size; i++) {
                Node *node = q.front();
                
                for(int j = 0; j < node->children.size(); j++)
                    q.push(node->children[j]);
                    
                q.pop();
            }
            depth++;
        }
        
        return depth;
    }
};
