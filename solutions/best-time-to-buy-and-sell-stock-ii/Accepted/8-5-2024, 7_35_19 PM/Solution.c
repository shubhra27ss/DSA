// https://leetcode.com/problems/best-time-to-buy-and-sell-stock-ii

int maxProfit(int* prices, int pricesSize) {
    int totalprofit=0;
    for(int i=1;i<pricesSize;i++) {
    if(prices[i]>prices[i-1]) {
        totalprofit = totalprofit + (prices[i]-prices[i-1]);
    }
}
    return totalprofit;
}