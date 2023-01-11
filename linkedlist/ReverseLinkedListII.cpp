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
    void  reverse(ListNode * &s, ListNode* &e )
    {
      ListNode * curr=s ;
      ListNode * prev=NULL;
      ListNode * next=NULL;
      while(prev!=e)
      {
       next=curr->next;
       curr->next=prev;
       prev=curr;
       curr=next;        
      }
        //now the newhead will be e ;
        
    }
    
    ListNode* reverseBetween(ListNode* head, int left, int right) {
      ListNode * temp=head;
      ListNode * t=head;
      ListNode * prev=NULL;
      int l=left-1;
      int r=right-1;
        if(l==r)return head;
        
        while(l--)
        {  prev=temp;
           temp=temp->next; 
        }
        while(r--)
        {
            t=t->next;
        }
       ListNode * rightnext=t->next; 
       reverse(temp,t);//t is new head  temp is last node ;
       if(head->next==NULL)
       {
           head=t;
           temp->next=rightnext;
           return head;
       }
        else
        {
            prev->next=t;
            temp->next=rightnext;
            return head;
        }
       
              
    }
};