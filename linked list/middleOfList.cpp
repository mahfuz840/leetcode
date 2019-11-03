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
    ListNode* middleNode(ListNode* head) {
        if(!head)
            return head;
        ListNode *temp = head;
        int counter = 0;
        while(head)
        {
            counter++;
            head = head->next;
        }
        
        counter /= 2;
        for(int i = 0; i < counter; i++)
            temp = temp->next;
        
        return temp;
    }
};
