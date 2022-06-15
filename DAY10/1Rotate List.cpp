https://leetcode.com/problems/rotate-list/description/

 ListNode* rotateRight(ListNode* head, int k) {
        //brute force approach
       //edge case 
        //TC o(n*k) if k let supoose 2000000000000 then that is not the good time complexity;
//         if(head==NULL || head->next==NULL)  return head;
        
//         for(int i=0;i<k;i++){
//             ListNode*temp=head;
//             while(temp->next->next!=nullptr){
//                 temp=temp->next;
//             }
//             ListNode*end=temp->next;
//             temp->next=nullptr;//break the link
//             end->next=head;//form a cycle
//             head=end;
//         }
//     return head;
        
        // 2nd approach is we will take k%len so tc will reduce there and do same process almost
        // TC O(length of list + )+ O(len-k)
        
        if(head==NULL || head->next==NULL)  return head;
        int len=1;
        ListNode*temp=head;
        while(temp->next!=NULL){
            temp=temp->next;
            len++;
        }
        temp->next=head;//cycle has formed here;
        k=k%len;
        int end=len-k;
        while(end--){
            temp=temp->next;
        }
         head = temp->next;
        temp->next=NULL;
        
        return head;
        
    }
};