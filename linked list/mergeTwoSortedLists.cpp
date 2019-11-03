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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode *head;
        ListNode *rider;
        
        if(l1 == nullptr)
            return l2;
        else if(l2 == nullptr)
            return l1;
        if(l1->val < l2->val)
        {
            head = l1;
            l1 = l1->next;
        }
        else
        {
            head = l2;
            l2 = l2->next;
        }
        rider = head;
        
        
        while(l1 != nullptr && l2 != nullptr)
        {
            if(l1->val < l2->val)
            {
                rider->next = l1;
                l1 = l1->next;
            }
            else
            {
                rider->next = l2;
                l2 = l2->next;
            }
            rider = rider->next;
        }
        
        while(l1 != nullptr)
        {
            rider->next = l1;
            rider = rider->next;
            l1 = l1->next;
        }
        
        while(l2 != nullptr)
        {
            rider->next = l2;
            rider = rider->next;
            l2 = l2->next;
        }

        
        return head;
    }
};
