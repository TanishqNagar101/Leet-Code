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
    ListNode* oddEvenList(ListNode* head) {
        if(head == nullptr||head->next==nullptr) return head;
        ListNode* odd=nullptr;
        ListNode* obegin=nullptr;
        ListNode* even=nullptr;
        ListNode* ebegin=nullptr;

        bool k=true;
        while(head){
            if(k){
                if(odd==nullptr){
                    odd=head;
                    obegin=odd;
                }
                else{
                    odd->next=head;
                    odd=odd->next;
                }
            }
            else{
                if(even==nullptr){
                    even=head;
                    ebegin=even;
                }
                else{
                    even->next=head;
                    even=even->next;
                }
            }
            head=head->next;
            k= !k;
            
        }
        if(even) even->next = nullptr;  
        if(odd) odd->next = ebegin;
        return obegin;
    }   
};