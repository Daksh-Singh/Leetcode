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
    ListNode* removeNthFromEnd(ListNode* head, int n) 
    {
        ListNode *first = head;
        ListNode *second = head;
        while(first != NULL and n > 0)
        {
            first = first->next;
            n --;
        }
        if(first == NULL) 
        {
            head = head->next;
            return head;
        }
        while(first->next)
        {
            first = first->next;
            second = second->next;
        }
        second->next = second->next->next;
        return head;
    }
};