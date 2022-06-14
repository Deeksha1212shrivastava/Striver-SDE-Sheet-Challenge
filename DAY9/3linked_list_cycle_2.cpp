https://leetcode.com/problems/linked-list-cycle-ii/

class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        //first approach is using hashing
        
//     unordered_map<ListNode*>mpp;
//         while(head!=nullptr){
//             if(mpp.find(head)!=mpp.end())
//                 return head;
            
//             mpp.insert(head);
//             head=head->next;
//         }
//         return nullptr;
        
        
        //using two pointer using slow fast and entry pointer TC O(n)  SC O(1)
        
        if(head == NULL or head->next == NULL) 
            return nullptr;
          ListNode *slow=head;
          ListNode *fast=head;
          ListNode *entry=head;
        
        while(fast->next and fast->next->next){
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast)//cycle has detected
            {
                while(slow!=entry){
                    slow=slow->next;
                    entry=entry->next;
                }
                return slow;
            }
        }
        return NULL;
    }
};