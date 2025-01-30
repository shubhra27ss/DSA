// https://leetcode.com/problems/valid-palindrome

class Solution:
    def isPalindrome(self, s: str) -> bool:
        left = 0
        right = len(s) - 1

        while left < right:
            while left < right and not self.isalnum(s[left]):
                left += 1
            while left < right and not self.isalnum(s[right]):
                right -= 1

            if left < right and s[left].lower() != s[right].lower():
                return False

            left += 1
            right -= 1

        return True

    def isalnum(self, char):
        """
        Checks if a character is alphanumeric.
        """
        return (ord('a') <= ord(char) <= ord('z')) or (ord('A') <= ord(char) <= ord('Z')) or (ord('0') <= ord(char) <= ord('9'))