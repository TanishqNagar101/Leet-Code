/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:

    Node* copyRandomList(Node* head) {
        if (!head) return nullptr;

        // Step 1: Insert cloned nodes after each original node
        Node* temp = head;
        while (temp) {
            Node* newNode = new Node(temp->val);
            newNode->next = temp->next;
            temp->next = newNode;
            temp = newNode->next;
        }

        // Step 2: Set random pointers of cloned nodes
        temp = head;
        while (temp) {
            if (temp->random) {
                temp->next->random = temp->random->next;
            }
            temp = temp->next->next;
        }

        // Step 3: Separate original and cloned lists
        Node* dummy = new Node(0);
        Node* copyTail = dummy;
        temp = head;

        while (temp) {
            Node* clone = temp->next;
            copyTail->next = clone;
            copyTail = clone;

            temp->next = clone->next; // restore original
            temp = temp->next;
        }

        return dummy->next;
    }
};