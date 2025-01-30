// https://leetcode.com/problems/best-time-to-buy-and-sell-stock

int maxProfit(int* prices, int pricesSize) {
    //pricesSize is the no. of elements in the array "price"

    if(pricesSize==0) {
        return pricesSize;
    }

    int min_price=INT_MAX;
    int maxProfit=0;

    for(int i=0;i<pricesSize;i++) {
        if(prices[i]<min_price) {
            min_price=prices[i];

        }
        int profit= prices[i]- min_price;
        if(profit>maxProfit) {
            maxProfit=profit;
        }
    }
    return maxProfit;
}