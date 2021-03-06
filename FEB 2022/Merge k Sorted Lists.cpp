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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if(lists.empty())
        {
            return NULL;
        }
        while(lists.size()>1)
        {
            ListNode* root=merge(lists[0],lists[1]);
            lists.erase(lists.begin());
            lists.erase(lists.begin());
            lists.push_back(root);
        }
        return lists[0];
        
    }
    ListNode* merge(ListNode* a,ListNode*b)
    {
        if(!a)
            return b;
        if(!b)
            return a;
        if(a->val>=b->val)
        {
            b->next=merge(a,b->next);
            return b;
        }
        else
        {
            a->next=merge(a->next,b);
            return a;
        }
        
    }
};