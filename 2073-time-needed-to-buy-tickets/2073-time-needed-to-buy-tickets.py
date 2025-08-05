class Solution:
    def timeRequiredToBuy(self, tickets: List[int], k: int) -> int:
        time = 0
        n = len(tickets)
        # i is their ticket and k is my ticket
        for i in range (n):
            if i <= k :
                time += min(tickets[i], tickets[k])
            else:
                time += min(tickets[i],tickets[k]-1)
        return time        