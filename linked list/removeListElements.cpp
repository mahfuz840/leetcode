/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        ListNode *node;
        ListNode *prev = nullptr;
        
        while(head && head->val == val)
            head = head->next;
        
        node = head;
        
        while(node)
        {
            if(node->val == val)
            {
                if(!node->next)
                {
                    prev->next = nullptr;
                }
                else
                    prev->next = node->next;
            }
            else
                prev = node;
            
            node = node->next;
            
        }
        
        return head;
    }
};
