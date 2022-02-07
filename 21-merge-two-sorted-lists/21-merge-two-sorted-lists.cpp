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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        //recursive soln
        if(list1 != NULL and list2 != NULL){
            ListNode* ans = NULL;
            if(list1->val <= list2->val){
                ans = list1;
                ans->next = mergeTwoLists(list1->next, list2);
            }
            else{
                ans = list2;
                ans->next = mergeTwoLists(list1, list2->next);
            }
            return ans;
        }
        else if(list1 == NULL)  return list2;
        return list1;
    }
};