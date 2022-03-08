/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(!head)
            return false;
        ListNode* slow=NULL,*fast=head;
        
        while(fast && fast->next)
        {
            slow=slow==NULL?head:slow->next;
            fast=fast->next->next;
            if(slow==fast)
                return true;
        }
        
        return false;
    }
};