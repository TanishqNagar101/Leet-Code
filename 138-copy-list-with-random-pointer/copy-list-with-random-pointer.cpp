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

    Node* nextcreater(Node* head){
        Node* ans = new Node(-1);
        Node* k = ans;
        while(head){
            Node* temp = new Node(head->val);
            k->next = temp;
            k=k->next;
            head=head->next;
        }
        return ans->next;
    }

    int distance(Node* h, Node* k){
        int i=0;
        while(h!=k){
            h=h->next;
            i++;
        }
        return i;
    }

    void randomcreater(Node* head,Node* orig){
        Node* main = orig;
        Node* copy = head;
        while(orig){
            if(orig->random != NULL){
                int d = distance(main,orig->random);
                cout<<"For Node: "<<orig->val<<" with d = "<<d<<endl;
                int i=0;
                Node* temp = copy;
                while(i<d){
                    temp = temp->next;
                    i++;
                }
                head->random = temp;
                // cout<<i<<" "<<d<<endl;
                // cout<<"Node: "<<head->val<<" Random: "<<head->random->val<<endl;
            }
            orig=orig->next;
            head=head->next;
        }
    }

    Node* copyRandomList(Node* head) {
        Node* ans = nextcreater(head);
        // cout<<head->random;
        randomcreater(ans,head);
        return ans;
    }
};