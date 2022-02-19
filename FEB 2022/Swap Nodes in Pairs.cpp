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
    ListNode* swapPairs(ListNode* head) {
        if(!head || !head->next)
            return head;
        
        ListNode* last=NULL;
        ListNode* cur=head;
        ListNode* next1=head;
        ListNode* ans=head->next;
        while(cur!=NULL)
        {
            if(cur->next)
            {
                next1=cur->next->next;
            }
            else
                break;
          
            cur->next->next=cur;
            if(last)
                last->next=cur->next;
            cur->next=next1;
            
            last=cur;
            
            cur=next1;
        }
        return ans;
    }
};