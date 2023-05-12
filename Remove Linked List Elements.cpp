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
    ListNode* removeElements(ListNode* head, int val) {
   
         if(head==NULL)
         return head;
        
        if(head->next == NULL && head->val!=val)
        return head;

        if(head->next == NULL && head->val==val)
        return NULL;

        ListNode* prev=head;
        ListNode* curr=head;
        while(curr!=NULL)
        {
            if(curr==head && curr->val==val)
            {
                curr = head->next;
                head = curr;
            }

            else if(curr!=head && curr->val == val)
            {
                prev->next = curr->next;
                curr->next=NULL;
                curr = prev->next;

            }

            else if(curr->val!=val)
            {
                prev = curr;
                curr = curr->next;
            }
        }
        return head;
    }
};
