// https://leetcode.com/problems/palindrome-number

class Solution:
    def isPalindrome(self, x: int) -> bool:
        """
        Determines if an integer is a palindrome.

        Args:
            x: The integer to check.

        Returns:
            True if x is a palindrome, False otherwise.
        """
        if x < 0:
            return False  # Negative numbers cannot be palindromes

        reversed_num = 0
        original_x = x

        while x > 0:
            digit = x % 10
            reversed_num = (reversed_num * 10) + digit
            x //= 10

        return original_x == reversed_num