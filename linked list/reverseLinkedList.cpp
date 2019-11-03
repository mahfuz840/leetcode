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
    ListNode* reverseList(ListNode* head) {
        ListNode *point = head;
        ListNode *prev = nullptr;
        ListNode *next;
        ListNode *temp;
        
        if(!head)
            return nullptr;
        
        while(true)
        {
            if(!point->next)
            {
                point->next = prev;
                head = point;
                return head;
            }
            temp = point->next;
            point->next = prev;
            prev = point;
            point = temp;
        }
        
        return head;
    }
};
