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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        set<ListNode *> nodesB;
        while(headB)
        {
            nodesB.insert(headB);
            headB = headB->next;
        }
        while(headA)
        {
            if(nodesB.find(headA) != nodesB.end())
                return headA;
            headA = headA->next;
        }
        return NULL;
    }
};