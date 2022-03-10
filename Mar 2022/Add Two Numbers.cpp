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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        int carry=0,p=0;
        ListNode* ans1=l1,*ans2=l2;
        while(l1 || l2)
        {
            if(l1 && l2)
            {
                p=l1->val+l2->val+carry;
                
                l1->val=p%10;
                l2->val=p%10;
                carry=p/10;
                if(!l1->next && !l2->next && carry==1)
                {
                    l1->next=new ListNode(1);
                    return ans1;
                }
                    
                
                l1=l1->next;
                l2=l2->next;
                if(!l1 && !l2)
                    return ans1;
                //cout<<p<<" "<<carry<<" ";
            }
            else if(l1)
            {
                p=l1->val+carry;
                //cout<<p<<" "<<carry;
                l1->val=p%10;
                carry=p/10;
                if(!l1->next && carry==1)
                {
                    l1->next=new ListNode(1);
                    return ans1;
                }
                l1=l1->next;
                if(!l1)
                  return ans1;
                
                
            }
            else if(l2)
            {
                p=l2->val+carry;
                l2->val=p%10;
                carry=p/10;
               // cout<<p<<" "<<carry;
               if(!l2->next && carry==1)
                {
                    l2->next=new ListNode(1);
                    return ans2;
                }
                l2=l2->next;
                if(!l2)
                   return ans2;
            }
        }
        
        return ans1;
    }
};