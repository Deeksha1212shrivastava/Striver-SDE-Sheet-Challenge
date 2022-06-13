https://leetcode.com/problems/reverse-linked-list/

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
};


//2nd approach is recursive

class Solution {
public:

    ListNode* reverseList(ListNode* &head) {

        if (head == NULL||head->next==NULL)
            return head;

        ListNode* nnode = reverseList(head->next);
        head->next->next = head;
        head->next = NULL;
        return nnode;
    }