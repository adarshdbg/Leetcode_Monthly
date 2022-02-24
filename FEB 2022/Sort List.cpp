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
    ListNode* midNode(ListNode* head)
    {
        if(!head || !head->next)
            return head;
        ListNode* slow=NULL,*fast=head;
        
        while(fast && fast->next)
        {
            slow=slow==NULL?head:slow->next;
            fast=fast->next->next;
        }
        fast=slow->next;
        slow->next=NULL;
        return fast;
    }
    ListNode* sort(ListNode* left,ListNode* right)
    {
        ListNode* pp=new ListNode(1);
        ListNode* ptr=pp;
        while(left && right)
        {
            if(left->val < right->val)
            {
                ptr->next=left;
                left=left->next;
            }
            else
            {
                ptr->next=right;
                right=right->next;
            }
            ptr=ptr->next;
        }
        if(left)
            ptr->next=left;
        else
            ptr->next=right;
        
        return pp->next;
    }
    ListNode* sortList(ListNode* head) {
        if(!head || !head->next)
            return head;
        ListNode* mid=midNode(head);
        ListNode* left=sortList(head);
        ListNode* right=sortList(mid);
        
        ListNode* curr=sort(left,right);
        
        return curr;
    }
};