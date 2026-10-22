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

        if(head == nullptr){
            return nullptr;
        }

        Node* cur = head;
        while(cur != nullptr){
            Node* l2 = new Node(cur -> val);
            l2 -> next = cur -> next;
            cur -> next = l2;
            cur = l2 -> next; 
        }

        Node* cur1 = head;
        while(cur1 != nullptr){
            if(cur1 -> random != nullptr){
                cur1 -> next -> random = cur1 -> random -> next;
            }
            cur1 = cur1 -> next -> next;
        }

        Node* newhead = head -> next;
        Node* cur2 = newhead;
        while(head != nullptr && cur2 -> next != nullptr){
            head -> next = cur2 -> next;
            cur2 -> next = cur2 -> next -> next;
            head = head -> next;
            cur2 = cur2 -> next;
        }

        return newhead;
    }
};
