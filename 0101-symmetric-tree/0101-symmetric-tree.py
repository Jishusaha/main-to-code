# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution(object):
    def isSymmetric(self, root):
        def symmetric(left,right):
            if left is None and right is None:
                return True

            if left is None or right is None:
                return False

            if left.val != right.val:
                return False

            return(symmetric(left.left, right.right) and
                   symmetric(left.right, right.left))

        if root is None:
            return True

        return symmetric(root.left, root.right)

                
        