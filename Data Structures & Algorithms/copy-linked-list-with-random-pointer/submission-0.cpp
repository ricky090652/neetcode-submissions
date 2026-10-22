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
        unordered_map<Node*, Node*> oldToCopy;
        oldToCopy[NULL] = NULL;
        
        Node* cur = head;
        while(cur != nullptr){
            Node* node = new Node(cur -> val);
            oldToCopy[cur] = node;
            cur = cur -> next;
        }

        Node* cur1 = head;
        while(cur1 != nullptr){
            Node* node1 = oldToCopy[cur1];
            node1 -> next =  oldToCopy[cur1 -> next];
            node1 -> random =  oldToCopy[cur1 -> random];
            cur1 = cur1 -> next;
        }
        return oldToCopy[head];


    }
};
