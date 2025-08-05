class StockSpanner:

    def __init__(self):
        self.stack = []
        

    def next(self, price: int) -> int:
        span = 1
        while self.stack and self.stack[-1][0] <= price: #the price part of the top element should be less than the current element price
            span += self.stack.pop()[1] #pops the span part and adds it to the current day's span
        self.stack.append([price,span])
        return span
        


# Your StockSpanner object will be instantiated and called as such:
# obj = StockSpanner()
# param_1 = obj.next(price)