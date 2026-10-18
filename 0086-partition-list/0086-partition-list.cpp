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
    ListNode* partition(ListNode* head, int x) {
        ListNode* small = new ListNode(0);
        ListNode* large = new ListNode(0);

        ListNode* smalltail = small;
        ListNode* largetail = large;

        ListNode* curr = head;
        while(curr!=nullptr){
            if(curr->val>=x){
                
                largetail->next = new ListNode(curr->val);
                largetail = largetail->next;

            }
            else{
                smalltail->next = new ListNode(curr->val);
                smalltail = smalltail->next;
            }
            curr=curr->next;
        }
        smalltail->next = large->next;
        return small->next;

        
    }
};