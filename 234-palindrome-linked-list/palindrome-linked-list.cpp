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
    bool isPalindrome(ListNode* head) {
        string s="";
        ListNode* k = head;
        while(k){
            s+=to_string(k->val);
            k=k->next;
        }
        string q = s;
        reverse(s.begin(),s.end());
        return s == q;
    }
};