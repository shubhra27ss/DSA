class Solution:
    def reverseWords(self, s: str) -> str:
        words = s.strip().split()

        # Reverse the list of words
        reversed_words = words[::-1]

        # Join the words with a single space
        return ' '.join(reversed_words)
        