// https://leetcode.com/problems/integer-to-roman

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* intToRoman(int num) {
    // Define arrays for Roman numeral values and their corresponding symbols
    int values[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    char* symbols[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
    
    // Allocate a buffer to store the result. 20 characters should be enough for any valid input.
    char* result = (char*)malloc(20 * sizeof(char));
    result[0] = '\0'; // Initialize the result string

    // Loop through each value-symbol pair
    for (int i = 0; i < 13; i++) {
        // While the number is greater than or equal to the current value
        while (num >= values[i]) {
            // Subtract the value from the number
            num -= values[i];
            // Append the corresponding symbol to the result string
            strcat(result, symbols[i]);
        }
    }
    
    // Return the constructed Roman numeral string
    return result;
}


