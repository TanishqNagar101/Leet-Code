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
    void deleteNode(ListNode* node) {
        auto curr = node;
        auto next = node->next;
        while(true){
            curr->val = next->val;
            if(next->next == NULL){
                curr->next = NULL;
                break;
            }
            curr = curr->next;
            next = curr->next;
        }
    }
};