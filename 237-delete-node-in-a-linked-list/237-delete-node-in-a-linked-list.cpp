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
    void deleteNode(ListNode* node) {
     
        if(node==NULL)
            return;
        
        ListNode *next1=node->next,*curr=node,*prev=NULL;
        
        
        while(next1!=NULL)
        {
            prev=curr;
            curr->val=next1->val;
            curr=curr->next;
            next1=next1->next;
        }
        
        
        prev->next=NULL;
    }
};