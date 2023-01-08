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
    ListNode* deleteDuplicates(ListNode* head) {
        vector<int> v(100,0);//O(n)space 
        vector<int> n(100,0);
        ListNode * dummy=new ListNode (-1);
        ListNode *tail=dummy;
     
        
        ListNode *temp=head;
        while(temp!=NULL)
        {
            if (temp->val>=0)  v[temp->val]++;
            else{
                n[(-temp->val)]++;
            }
            temp=temp->next;
        }
        temp=head;
        while(temp!=NULL)
        {   if(temp->val>=0)
           {
            if(v[temp->val]==1)
            {
                tail->next=temp;
                tail=temp;
          
            }
           }
            else
            {
                if(n[-temp->val]==1)
                {
                    tail->next=temp;
                    tail=temp;
                }
            }
                  temp=temp->next;
        }
        tail->next=NULL;
        return dummy->next;
    }
};