class Solution:
    def rotateString(self, s: str, goal: str) -> bool:
        """
        If we concatenate s with itself (i.e. s + s),
        all possible rotations of s are present as substrings of this new string.
        goal in (s + s) Checks whether goal exists as a substring in all possible rotations of s."""
        return len(s) == len(goal) and goal in (s + s)
        