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
        if(!head || !head->next)
            return head;
        int len=0;
        ListNode* curr=head,*last=NULL;
        
        while(curr)
            len++,last=curr,curr=curr->next;
        
        k=k%len;
        // if(k==0)
        //     return head;
        curr=head;
        int p=len-k;
       // cout<<p<<" ";
        while(p!=1)
        {
            p--;
            //cout<<curr->val<<" ";
            curr=curr->next;
        }
       // cout<<curr->val<<" ";
        last->next=head;
        head=curr->next;
        
        curr->next=NULL;
        return head;
        
    }
};