// https://leetcode.com/problems/valid-palindrome

bool isPalindrome(char* s) {
    int left = 0;
    int right = strlen(s)-1;



while(left<right) {
    while(left<right && !((s[left] >= 'a' && s[left] <= 'z' ) || (s[left] >= 'A' && 
    s[left] <= 'Z') || (s[left] >= '0' && s[left] <= '9'))) {
        left++;

    }

    while(left<right && !((s[right] >= 'a' && s[right] <= 'z' ) || (s[right] >= 'A' && 
    s[right] <= 'Z') || (s[right] >= '0' && s[right] <= '9'))) {
        right--;

    }

    if(tolower(s[left]) != tolower(s[right])) {
        return false;
    }
    left++;
    right--;
}
return true;
}