from typing import Optional

# Definition for a binary tree node.
class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right

def isSymmetric(root: Optional[TreeNode]) -> bool:
    def is_mirror(left: Optional[TreeNode], right: Optional[TreeNode]) -> bool:
        if not left or not right:
            return left is right

        return (
            left.val == right.val
            and is_mirror(left.left, right.right)
            and is_mirror(left.right, right.left)
        )

    return is_mirror(root.left, root.right)
