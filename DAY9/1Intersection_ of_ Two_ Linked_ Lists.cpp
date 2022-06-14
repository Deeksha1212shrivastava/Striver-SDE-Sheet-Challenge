// https://leetcode.com/problems/intersection-of-two-linked-lists/

class Solution {
public:
    ListNode *getIntersectionNode(ListNode *head1, ListNode *head2) {
        //if we do with hashing in this we are storing address of node not the node_.val..impottant point keep in mind SC o(n) Tc O(n);
        
//         unordered_set<ListNode*>s;
//         while(head1!=nullptr){
//             s.insert(head1);
//             head1=head1->next;
//         }
        
//         while(head2!=nullptr){
//             if(s.find(head2)!=s.end()) return head2;
            
//             head2=head2->next;
//         }
        
//         return NULL;
        
        //2nd approach is simple iterating TC O(m*n),SC O(1)
        
        while(head2!=nullptr){
            ListNode*temp=head1;
            while(temp!=nullptr){
                if(temp==head2)  return head2;
                temp=temp->next;
            }
            
            head2=head2->next;
        }
        return NULL;     
    }
};