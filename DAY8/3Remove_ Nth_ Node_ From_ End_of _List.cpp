// https://leetcode.com/problems/remove-nth-node-from-end-of-list/

//brute force approach is first traverse lengh-n node then simplly connect that node with his node->next->next

//2nd approach is using two pointer first traverse the fast till and after that we will traverse the slow and fast when fast reaches to end node slow node will be at length-n th node  /
//TC o(n) SC O(1)

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode*dummy=new ListNode ();
        dummy->next=head;
        ListNode*slow=dummy;
        ListNode*fast=dummy;
        for(int i=0;i<n;i++){
            fast=fast->next;
            // cout<<fast->val;
        }
        while(fast->next!=nullptr){
            slow=slow->next;
            fast=fast->next;
        }
        //after here slow is pointing to prev of nth;
        slow->next=slow->next->next;
        
        return dummy->next;
    }
};