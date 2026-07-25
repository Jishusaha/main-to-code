# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution(object):
    def removeNthFromEnd(self, head, n):
        dummy=ListNode(0)
        dummy.next= head
        prev=dummy
        curr=dummy

        while n>0:
            prev=prev.next
            n-=1
        
        while prev.next is not None:
            prev=prev.next
            curr=curr.next
        curr.next=curr.next.next

        return dummy.next






        