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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head == NULL || head->next == NULL)
        return NULL;

    int size = 0;
    ListNode *curr = head;
    while(curr != NULL){
        curr = curr->next;
        size++;
    }

    if(n == size)
        return head->next;

    int index = size - n;
    ListNode *prev = head;
    int i = 1;
    while(i < index){
        prev = prev->next;
        i++;
    }
    prev->next = prev->next->next;
    return head;
    }
};