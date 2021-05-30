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
        ListNode *temp = head;
        int length = 0;
        while(temp)
        {
            length ++;
            temp = temp->next;
        }
        if(length == n)
        {
            head = head->next;
            return head;
        }
        length -= n;
        temp = head;
        for(int i = 0; i < length - 1; i ++)
            temp = temp->next;
        temp->next = temp->next->next;
        return head;
    }
};