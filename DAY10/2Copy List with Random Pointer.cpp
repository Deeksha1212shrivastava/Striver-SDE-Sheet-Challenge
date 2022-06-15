https://leetcode.com/problems/copy-list-with-random-pointer/


// 1 2 3 4 null
class Solution {
public:
    Node* copyRandomList(Node* head) {
        Node*iter=head;
        Node*front=head;
        //first step is make a copy of original code right after of the original node 
        //and link them together side by side in a single list
        while(iter!=nullptr){
            front=iter->next; //will point to 2
            Node*copy=new Node(iter->val);
            iter->next=copy;
            copy->next=front;
            iter=front;//so will do step further
        }
        //second step is gonna to assign a random pointer for the copy nodes
        iter=head;
        while(iter!=nullptr){
            if(iter->random!=nullptr){
                 iter->next->random = iter->random->next;
            }
            iter=iter->next->next;//because we alredy created a copy node that why we will increase a iter by two steps
        }
        
        //3rd step is restore a original node and extract the copy node
        iter=head;
        Node*dummy=new Node(0);
        Node*copy=dummy;
        while(iter!=nullptr){
            front=iter->next->next;//point to 2
            //extract the cpy
            copy->next=iter->next;//y copy node 1' s connect ho jayga 
                //restore the original
                iter->next=front;//because front has original node
            
            copy=copy->next;
            iter=front;//iter ko bhi two steps s bdaynge n 
        }
        
        return dummy->next;
        
    }
};