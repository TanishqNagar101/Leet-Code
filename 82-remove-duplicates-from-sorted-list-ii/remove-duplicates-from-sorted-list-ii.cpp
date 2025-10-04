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
    void print(ListNode* head){
        while(head){
            cout<<head->val<<"->";
            head=head->next;
        }
    }
    ListNode* del(ListNode* curr){
        ListNode* start = curr;
        while(curr && curr->next && curr->val == curr->next->val){
            curr = curr->next;
        }
        ListNode* nxt = curr->next;
        if(curr && curr->next)cout<<curr->next->val;
        while(start != curr){
            ListNode* d = start;
            start = start->next;
            delete d;
        }
        delete curr;
        if(nxt && nxt->next && nxt->val == nxt->next->val) nxt = del(nxt);
        return nxt;

    }
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* dum = new ListNode(-1,head);
        ListNode* prev = dum;
        ListNode* curr = head;
        while(curr && curr->next){
            if(curr->val == curr->next->val){
                prev->next = NULL;
                curr = del(curr);
                if(curr == NULL) return dum->next;
                prev->next = curr;
            }
            prev = curr;
            if(curr) curr = curr->next;
        }
        print(dum);
        return dum->next;
    }
};