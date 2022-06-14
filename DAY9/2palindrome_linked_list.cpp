https://leetcode.com/problems/palindrome-linked-list/

Time Complexity: O(N/2)+O(N/2)+O(N/2)
Space Complexity: O(1)

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* prev=nullptr;
        while(head!=nullptr){
            ListNode*next=head->next;
            head->next=prev;//yha s bond tutega or peeche wale se connect ho jaygga 
            prev=head;
            head=next;
        }
        return prev; //qki last m prev hi head ko point kr rahi hoti hai 
    }
    
    bool isPalindrome(ListNode* head) {
        if(head==nullptr || head->next==nullptr)
            return true;
        ListNode*slow=head;
        ListNode*fast=head;
        while(fast->next!=nullptr and fast->next->next!=nullptr){
            slow=slow->next;
            fast=fast->next->next;
             }
        slow->next=reverseList(slow->next);
        slow=slow->next;
        ListNode*dummy=head;
        
        while(slow!=nullptr){
            if(dummy->val!=slow->val)
                return false;
            dummy=dummy->next;
            slow=slow->next;
        }
        return true;
    }
};
