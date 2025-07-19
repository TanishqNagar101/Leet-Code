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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head == nullptr || head->next == nullptr||k==0) return head;
        int n = 0;
        ListNode* temp=head;
        ListNode* last=nullptr;
        while(k){
            if(temp->next == nullptr){
                temp->next=head;
                n++;
                break;
            }
            temp=temp->next;
            n++;
        } 
        k = k%n;
        cout<<k;
        temp = head;
        for(int i=0;i<n-k-1;i++){
            temp=temp->next;
        }
        head = temp->next;
        temp->next=nullptr;
        
        return head;
    }
};