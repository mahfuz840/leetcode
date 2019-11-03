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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        long sum = 0, carry = 0;;
        int i = 0;
        
        ListNode *head = nullptr;
        ListNode *temp;
        
        while(l1 != nullptr && l2 != nullptr)
        {
            int x = l1->val + l2->val + carry;
            if(head == nullptr)
            {
                head = new ListNode(x%10);
                temp = head;
            }
            else
            {
                temp->next = new ListNode(x%10);
                temp = temp->next;
            }
            carry = x/10;
            l1 = l1->next;
            l2 = l2->next;
        }
        
        while(l1 != nullptr)
        {
            int x = l1->val + carry;
            if(head == nullptr)
            {
                head = new ListNode(x%10);
                temp = head;
            }
            else
            {
                temp->next = new ListNode(x%10);
                temp = temp->next;
            }
            carry = x/10;
            l1 = l1->next;
        }
        
        while(l2 != nullptr)
        {
            int x = l2->val + carry;
            if(head == nullptr)
            {
                head = new ListNode(x%10);
                temp = head;
            }
            else
            {
                temp->next = new ListNode(x%10);
                temp = temp->next;
            }
            carry = x/10;
            l2 = l2->next;
        }
        
        if(carry > 0)
            temp->next = new ListNode(carry);
        
        
        
        return head;
    }
};
