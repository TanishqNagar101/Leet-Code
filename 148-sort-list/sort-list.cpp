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
    ListNode* split(int size,ListNode* head){
        while(--size &&head){
            head = head->next;
        }
        if(!head) return nullptr;
        ListNode* temp = head->next;
        head->next = nullptr;
        return temp;
    }
    ListNode* merge(ListNode* l1,ListNode* l2){
        if(!l1) return l2;
        if(!l2) return l1;
        ListNode temp(0);
        ListNode* dummy = &temp;
        while(l1 && l2){
            if(l1->val<=l2->val){
                dummy->next = l1;
                dummy = dummy->next;
                l1 = l1->next;
            }
            else{
                dummy->next=l2;
                dummy = dummy->next;
                l2 = l2->next;
            }
        }
        while(l1){
            dummy->next = l1;
            dummy = dummy->next;
            l1 = l1->next;
        }
        while(l2){
            dummy->next=l2;
            dummy = dummy->next;
            l2 = l2->next;
        }
        return temp.next;
    }
    ListNode* sortList(ListNode* head) {
        if(!head || !head->next) return head;
        int length=0;
        ListNode* t = head;
        while(t){
            length++;
            t=t->next;
        }
        ListNode temp(0);
        temp.next=head;
        
        for(int i=1;i<length;i*=2){
            ListNode* curr = temp.next;
            ListNode* tail = &temp;

            while(curr){
                ListNode* left = curr;
                ListNode* right =split(i,left);
                curr = split(i,right);
                tail->next = merge(left,right);
                while(tail->next) tail=tail->next; 
            }
        }
        return temp.next;
    }
};