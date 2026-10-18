class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {

        if (list1 == nullptr) return list2;
        if (list2 == nullptr) return list1;

        ListNode* current1 = list1;
        ListNode* current2 = list2;

        ListNode* head = nullptr;
        if (current1->val <= current2->val) {
            head = current1;
            current1 = current1->next;
        } else {
            head = current2;
            current2 = current2->next;
        }

  
        ListNode* current = head;

        while (current1 != nullptr && current2 != nullptr) {
            if (current1->val <= current2->val) {
                current->next = current1; // 接上較小的 current1
                current1 = current1->next; // current1 往前走
            } else {
                current->next = current2; // 接上較小的 current2
                current2 = current2->next; // current2 往前走
            }
            current = current->next; // 全域指標往前走
        }

        // 3. 當其中一個串列走完後，把剩下的那個串列直接整條接上去
        if (current1 != nullptr) {
            current->next = current1;
        } 
        else {
            current->next = current2;
        }

        return head;
    }
};