// https://leetcode.com/problems/reverse-words-in-a-string

#include <stdio.h>
#include <string.h>
#include <ctype.h>

void reverse(char* start, char* end) {
    while (start < end) {
        char temp = *start;
        *start++ = *end;
        *end-- = temp;
    }
}

char* reverseWords(char* s) {
    int n = strlen(s);
    char* result = s;  // Store the original pointer to return
    char* wordStart = NULL;
    int index = 0;
    
    // First, reverse each word in the string
    for (int i = 0; i < n; i++) {
        if (s[i] != ' ' && wordStart == NULL) {
            wordStart = &s[i];
        }
        if (wordStart && (s[i + 1] == ' ' || s[i + 1] == '\0')) {
            reverse(wordStart, &s[i]);
            wordStart = NULL;
        }
    }
    
    // Second, reverse the whole string
    reverse(s, s + n - 1);
    
    // Third, clean up extra spaces
    for (int i = 0; i < n; i++) {
        if (s[i] != ' ' || (index > 0 && s[index - 1] != ' ')) {
            s[index++] = s[i];
        }
    }
    
    // Remove trailing space, if any
    if (index > 0 && s[index - 1] == ' ') {
        index--;
    }
    
    // Null terminate the result string
    s[index] = '\0';

    return result;
}
