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
    ListNode* rotateRight(ListNode* head, int k) {
        ListNode * temp=head;
        ListNode * tail=head;
        ListNode * next;
        if(head==NULL||head->next==NULL||k==0)
        {
            return head;
        }
        
        int len=0;
        while(temp!=NULL)
        {
            len++;
            tail=temp;
            temp=temp->next;
               
        }
        
        k=k%len;
        temp=head;
        
        int diff=len-k;
        int rotate=diff;
        if(k>0)
        {
        while(--rotate)
        {
            temp=temp->next;
        }
        
        if(diff)
        {
        next=temp->next;
        temp->next=NULL;
        tail->next=head;
        head=next;
        }      
        }
        return head;
        
    }
};