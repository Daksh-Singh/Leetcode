# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def removeNthFromEnd(self, head: Optional[ListNode], n: int) -> Optional[ListNode]:
        curr = head
        count = head
        size = 1    

        while count.next is not None:
            count = count.next
            size += 1

        if size == 1:
            head = None
        elif size == n:
            head = curr.next
        else:
            for i in range(size - n - 1):
                curr = curr.next
            curr.next = curr.next.next
        return head