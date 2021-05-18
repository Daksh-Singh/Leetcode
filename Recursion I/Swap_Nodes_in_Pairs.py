# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def swapPairs(self, head: ListNode) -> ListNode:
        if head == None or head.next == None:
            return head
        else:
            temp = head.val
            head.val = head.next.val
            head.next.val = temp
            self.swapPairs(head.next.next)
            return head