"""
# Definition for a Node.
class Node:
    def __init__(self, val: int = 0, left: 'Node' = None, right: 'Node' = None, next: 'Node' = None):
        self.val = val
        self.left = left
        self.right = right
        self.next = next
"""

class Solution:
    def connect(self, root: 'Node') -> 'Node':
        if root is None:
            return root
        
        self.traverse(root, None, None)
        return root
    
    def traverse(self, node, parent, goLeft):
        if node is None:
            return 
        
        left, right = node.left, node.right
        self.traverse(left, node, True)
        
        if parent is None:
            # for root
            node.next = None
        elif goLeft:
            node.next = parent.right
        else:
            if parent.next is None:  
                node.next = None
            else:
                node.next = parent.next.left
        
        self.traverse(right, node, False)
        