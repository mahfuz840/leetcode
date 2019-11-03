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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
        if(head->next == nullptr)
            return nullptr;
        
        ListNode *rider = head;
        ListNode *checker = head;
        
        for(int i = 0; i < n; i++)
            checker = checker->next;
        
        if(checker == nullptr)
            return head->next;
        
        while(checker != nullptr && checker->next != nullptr)
        {
            rider = rider->next;
            checker = checker->next;
        }

        
        rider->next = rider->next->next;
    
        
        return head;
    }
};
