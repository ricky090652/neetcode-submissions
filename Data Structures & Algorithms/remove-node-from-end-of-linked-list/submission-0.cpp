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
        ListNode* prev = nullptr;
        ListNode* nxt = head;
        while(head != nullptr){
            nxt = head -> next;
            head -> next = prev;
            prev = head;
            head = nxt;
        }
        head = prev;

        ListNode* cur = head;
        if(n != 1){
            for(int i = 0; i < n - 2; i++){
                cur = cur -> next;
            }
            cur -> next = cur -> next -> next;
        }
        else{
            head = head -> next;
        }

        ListNode* prev1 = nullptr;
        ListNode* nxt1 = head;
        while(head != nullptr){
            nxt1 = head -> next;
            head -> next = prev1;
            prev1 = head;
            head = nxt1;
        }
        head = prev1;
        return head;

    }
};
