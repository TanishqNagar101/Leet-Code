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
//will return starting pointer as i am giving it the end pointer
    ListNode* rev(ListNode* ll, int k){ 
        int cnt=1;
        ListNode* ans=nullptr;
        while(ll && cnt<=k){
            ListNode* temp =ll;
            ll=ll->next;
            temp->next=ans;
            ans=temp;
            cnt++; 
        }
        return ans;
    }

    void print(ListNode* head){
        while(head){
            cout<<head->val<<"->";
            head=head->next;
        }
        cout<<"null"<<endl;
    }

    ListNode* reverseKGroup(ListNode* head, int z) {
        if(z==1 || !head || !head->next) return head;
        int cnt=0;
        int it=1;
        ListNode* start=head;
        ListNode* end = head;
        ListNode* ans=nullptr;
        ListNode* temp=ans;
        while(end){
            cnt++;
            end=end->next;
            if(cnt == z){
                cout<<"Iteration: "<<it++<<endl;
                print(ans);
                cnt=0;
                ListNode* k = rev(start,z);
                if(!ans){
                    ans=k;
                    temp=start;
                }
                else{
                    temp->next=k;
                    temp=start;
                }
                start=end;
            }
        }
        if(start) temp->next=start;
        return ans;
    }
};