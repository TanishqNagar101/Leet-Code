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

    ListNode* rev(ListNode* ll){
        ListNode* ans=nullptr;
        while(ll){
            ListNode* temp = ll;
            ll=ll->next;
            temp->next=ans;
            ans=temp;
        }
        return ans;
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* a=(l1);
        ListNode* b=(l2);
        int carry=0;
        ListNode* ans=nullptr;
        ListNode* t=ans;
        while(a || b || carry){
            int temp = carry;
            if(carry>0) carry=0;
            if(a){
                temp+=a->val;
                a=a->next;
            }
            if(b){
                temp+=b->val;
                b=b->next;
            }
            if(temp>9){
                carry=1;
                temp=temp%10;
            }
            cout<<temp<<endl;
            ListNode* n = new ListNode(temp);
            if(!ans){
                ans=n;
                t=n;
            }
            else{
                t->next=n;
                t=t->next;
            }
            
        }
        // ans = rev(ans);
        return ans;
    }
};