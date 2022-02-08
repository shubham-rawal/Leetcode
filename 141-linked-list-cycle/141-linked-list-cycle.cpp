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
    bool hasCycle(ListNode *head) {
        if(head == NULL)    return false;
        
        ListNode* slow = head;
        ListNode* fast = head->next;
        
        while(slow!=NULL and fast!=NULL and slow!=fast){
            slow=slow->next;
            if(fast->next == NULL)  return false;
            fast = fast->next->next;
        }
        
        if(slow!=NULL and slow == fast) return true;
        
        return false;
    }
};