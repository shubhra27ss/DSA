// https://leetcode.com/problems/sqrtx

#include <stdio.h>

int mySqrt(int x) {
    if (x == 0 || x == 1) {
        return x;
    }
    
    int left = 1, right = x, result = 0;
    
    while (left <= right) {
        int mid = left + (right - left) / 2;
        
        // To prevent overflow, do comparison without directly multiplying mid * mid
        if (mid <= x / mid) {
            result = mid;  // mid is a potential result
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    
    return result;
}