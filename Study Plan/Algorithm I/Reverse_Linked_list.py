# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def reverseList(self, head):
        """Takes recursive approach"""
        new_head, _ = self.reverseListHelper(head)
        return new_head
    
    def reverseListHelper(self, node):
        if not (node and node.next):
	        return node, node
        else:
	        head, tail = self.reverseListHelper(node.next)
	        node.next = None 
	        tail.next = node
	        return head, node