from typing import Optional

# Definition for a binary tree node.
class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right

def isSameTree(p: Optional[TreeNode], q: Optional[TreeNode]) -> bool:
    if not p or not q:
        return p is q

    return (
        p.val == q.val
        and isSameTree(p.left, q.left)
        and isSameTree(p.right, q.right)
    )