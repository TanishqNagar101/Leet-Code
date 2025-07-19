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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head==nullptr || head->next==nullptr)return nullptr;
        int z=0;
        ListNode* k=head;
        ListNode* del=head;
        for(int i=0;i<=n;i++){
            if(k == nullptr) break;
            k=k->next;
            z++;
        }
        while(k){
            k=k->next;
            del=del->next;
            z++;
        }
        cout<<del->val;
        if(z == n)head = del->next;
        else if(del->next) del->next = del->next->next;
        return head;
    }
};