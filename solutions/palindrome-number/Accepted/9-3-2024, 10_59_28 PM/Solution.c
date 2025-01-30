// https://leetcode.com/problems/palindrome-number

#include <stdbool.h>

bool isPalindrome(int x) {
    // If x is negative or ends with 0 but is not 0 itself, it is not a palindrome
    if (x < 0 || (x % 10 == 0 && x != 0)) {
        return false;
    }

    int reversedNumber = 0;
    
    // Reverse half of the number
    while (x > reversedNumber) {
        reversedNumber = reversedNumber * 10 + x % 10;
        x /= 10;
    }

    // The number is a palindrome if the first half equals the reversed second half
    // or the first half equals the reversed second half after removing the middle digit (for odd-length numbers)
    return x == reversedNumber || x == reversedNumber / 10;
}
