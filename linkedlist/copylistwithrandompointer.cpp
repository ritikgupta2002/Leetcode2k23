/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
     Node* copyRandomList(Node* head) {
     Node *temp=head;
     Node * next;
     Node * dummy=new Node(-1);
     Node * tail=dummy;
     Node * fast;
    if(head==NULL)return head;
        while(temp!=NULL)
        {
            Node * cpy=new Node(temp->val);
            Node * next=temp->next;
            cpy->next=next;
            temp->next=cpy;
            temp=next;
            
        }
        temp=head;
        while(temp!=NULL)
        {  
            if(temp->random) temp->next->random=temp->random->next;
            temp=temp->next->next;
        }
         temp=head;
         tail->next=temp->next;
         tail=temp->next;
         fast=temp->next->next;
        while(temp!=NULL)
        {
           if(fast)tail->next=fast->next;
           if(fast) tail=fast->next;
            temp->next=fast;
            temp=fast;  
            if(fast)fast=temp->next->next;
            
        }
         tail->next=NULL;
       
         return dummy->next;
        
        
    }
};