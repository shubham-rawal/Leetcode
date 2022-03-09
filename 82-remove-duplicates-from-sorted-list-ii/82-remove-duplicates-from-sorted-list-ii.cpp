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
    ListNode* deleteDuplicates(ListNode* head) {
        //creating a fake head node so as to handle the edge case of deleting a head from the list.
        ListNode* sentinel = new ListNode(0, head);
        
        //keeping a track of the prev nodes because we need to skip the entire duplicate subList
        ListNode* prev = sentinel;
        
        while(head!=NULL){
            //if it's a beginning of a duplicate subList, we need to skip all duplicates
            if(head->next != NULL and head->val==head->next->val){
                //move till the end of the duplicates subList
                while(head->next != NULL and head->val == head->next->val)  head = head->next;
                
                //skip all the duplicates
                prev->next = head->next;
            }
            else{
                //if it's just a single node and there are no duplicates, move the prev
                prev = prev->next;
            }
            head = head->next;
        }
        return sentinel->next;
    }
};