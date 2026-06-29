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
    bool hasCycle(ListNode* head) {
        if(!head || !head->next){
            return false;
        }

        ListNode* slowp = head;
        ListNode* fastp = head;

        while(fastp!=nullptr && fastp->next!=nullptr){
            fastp = fastp->next->next;
            slowp = slowp->next;

            if(fastp == slowp){
                return true;
            }
        }
        return false;
    }
};
