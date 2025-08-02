# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def oddEvenList(self, head: Optional[ListNode]) -> Optional[ListNode]:
        if not head or not head.next:
            return head
        
        odd = head                # start at 1st node
        even = head.next         # start at 2nd node
        even_head = even         # save head of even list
        
        while even and even.next:
            odd.next = even.next  # link odd node to next odd node
            odd = odd.next        # move odd pointer
            even.next = odd.next  # link even node to next even node
            even = even.next      # move even pointer

        odd.next = even_head      # connect end of odd list to start of even list
        return head