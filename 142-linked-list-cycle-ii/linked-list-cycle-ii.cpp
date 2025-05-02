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
    ListNode *check(ListNode *head){
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast!= NULL && fast->next!= NULL){
            slow = slow->next;
            fast = fast->next->next;
            if(slow == fast) return fast;
        }
        return nullptr;
    }
    ListNode *detectCycle(ListNode *head) {
        ListNode* n = check(head);
        if(n){
            ListNode* p1=n;
            ListNode* p2=head;
            while(p1!=p2){
                p1=p1->next;
                p2=p2->next;
            }
            return p1;
        }
        else return n;
    }
};