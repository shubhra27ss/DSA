// https://leetcode.com/problems/best-time-to-buy-and-sell-stock

class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        maxprof = 0
        n = len(prices)

        for i in range(n):
            for j in range(i+1 , n):
                if prices[j] > prices[i]:
                    maxprof = max(prices[j]-prices[i], maxprof)
        return maxprof

