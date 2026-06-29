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
        ListNode* dummy = new ListNode(0, head);
        ListNode* slowp = dummy;
        ListNode* fastp = head;

        while(n>0){
            fastp = fastp->next;
            n--;
        }

        while(fastp!=nullptr){
            slowp   = slowp->next;
            fastp   = fastp->next;
        }

        slowp->next = slowp->next->next;
        
        return dummy->next;

    }
};
