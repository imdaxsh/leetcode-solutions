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
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    pair<ListNode*,ListNode*> findMiddle(ListNode *head){
        if(nullptr == head || nullptr == head->next)
            return {nullptr,head};
        
        ListNode *slow = head;
        ListNode *fast = head->next;
        ListNode *prev = nullptr;
        
        while(fast && fast->next){
            fast = fast->next->next;
            prev = slow;
            slow = slow->next;
        }
        return {prev,slow};
    }
    
    TreeNode* sortedListToBST(ListNode* head) {
        if(nullptr == head)
            return nullptr;
        
        //returning {prev_middle,middle}
        pair<ListNode*,ListNode*> p = findMiddle(head);
        
        ListNode* prev = p.first;
        ListNode* middle = p.second;
        
        TreeNode* root = new TreeNode(middle->val);
        
        if(prev){
            prev->next = nullptr;
            root->left = sortedListToBST(head);
        }
        
        root->right = sortedListToBST(middle->next);
        return root;
    }
};