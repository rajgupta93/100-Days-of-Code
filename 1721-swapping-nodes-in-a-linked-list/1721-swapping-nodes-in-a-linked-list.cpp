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
    ListNode* swapNodes(ListNode* head, int k) {
        
        ListNode * curr1=head;
        
        if(!head)
            return head;
        
        int kl=k;
        k--;
        
        while(k--)
        {
            curr1=curr1->next;
        }
        
         ListNode * curr2=head;
       ListNode * fast=curr1;
        
        while(fast->next!=NULL)
        {
            curr2=curr2->next;
            fast=fast->next;
        }
        int temp=curr1->val;
        curr1->val=curr2->val;
        curr2->val=temp;
        return head;
    }
};