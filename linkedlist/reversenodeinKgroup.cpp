/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    
    void reverse(ListNode * start , ListNode * end )
    {
        ListNode * curr=start;
        ListNode * prev=NULL, *next=NULL;
        while(prev!=end)
        {
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
   
            
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
   
        if(head==NULL ||  k==1) return head;  
        ListNode * start=head ,*end=head ;
        int pos=k-1;
        while(pos--)
        {   
            end=end->next; 
            if(end==NULL) return head; //jb group nhi bn rha to mat bdao end ko ab return krdo head 
        }
               ListNode * nexthead=reverseKGroup(end->next,k);
               reverse(start, end);
               start->next=nexthead;
               return end;
            
    }
};