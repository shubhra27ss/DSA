// https://leetcode.com/problems/candy

int candy(int* ratings, int ratingsSize) {
    int *candies= (int*)malloc(ratingsSize*sizeof(int));
    for(int i=0;i<ratingsSize;i++) {
        candies[i]=1;
    } 
// first pass: going from left to right
//starting with i=1 because at beginning everyone was assigned 1 so checking whether current values is greater than the previous one
    for(int i=1;i<ratingsSize;i++) {
        if(ratings[i]>ratings[i-1]) {
            candies[i]=candies[i-1]+1;
        }
    }
//second pass: going from right to left
//array size of ratingsSize is upto ratingsSize-1
// so its previous element will be ratingsSize-2
    for(int i=ratingsSize-2;i>=0;i--){
        if(ratings[i]>ratings[i+1]){
            if (candies[i] <= candies[i + 1]) {
    candies[i] = candies[i + 1] + 1;
            }
        }
    }

    int totalCandies=0;
    for(int i=0;i<ratingsSize;i++) {
        totalCandies=totalCandies+candies[i];
    }
    return totalCandies;
}
