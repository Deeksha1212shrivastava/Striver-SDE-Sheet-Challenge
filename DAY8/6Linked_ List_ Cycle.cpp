// https://leetcode.com/problems/linked-list-cycle/


class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(!head) return false;
        ListNode*slow=head;
        ListNode*fast=head;
        
        while(fast->next && fast->next->next  ){
            slow=slow->next;
            fast=fast->next->next;
            
            if(fast==slow)
                return true;
        }
        return false;
        
     
    }
};

//2nd approach is using hashing
bool cycleDetect(node* head) {
    unordered_set<node*> hashTable;
    while(head != NULL) {
        if(hashTable.find(head) != hashTable.end()) return true;
        hashTable.insert(head);
        head = head->next;
    }
    return false;
}
