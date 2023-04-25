/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
 ListNode* reverseList(ListNode* head) {
          
        // BASE CASE
     if(head == NULL)
         return head;
        
        if(head -> next == NULL)
            return head;
        
        
        ListNode* first_node = reverseList(head->next);
        head->next->next = head;
        head->next = NULL;
        return first_node;  
    }
};