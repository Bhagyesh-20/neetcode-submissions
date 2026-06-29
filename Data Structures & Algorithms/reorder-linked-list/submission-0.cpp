class Solution {
public:
    void reorderList(ListNode* head) {
        // Base case: Agar 0, 1 ya 2 nodes hain toh kuch badalna hi nahi hai
        if(!head || !head->next || !head->next->next){
            return;
        }

        ListNode* slowp = head;
        ListNode* fastp = head;

        while(fastp->next != nullptr && fastp->next->next != nullptr){
            slowp = slowp->next;        // middle ptr 
            fastp = fastp->next->next;
        }

        ListNode* middle = reverseLL(slowp->next);
        slowp->next = nullptr; 

        ListNode* first  = head;
        ListNode* second = middle;
       
        while(second != nullptr){
            ListNode* temp1 = first->next;
            ListNode* temp2 = second->next;

            first->next = second;
            second->next = temp1;

            first = temp1;
            second = temp2; 
        }
    }

    ListNode* reverseLL(ListNode* head){
        ListNode* prev = nullptr;
        ListNode* curr = head;

        while(curr != nullptr){
            ListNode* nextNode = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nextNode;
        }
        return prev;
    }
};