class Solution:
    def romanToInt(self, s: str) -> int:
        roman = {
            'I' : 1,
            'V' : 5,
            'X' : 10,
            'L' : 50,
            'C' : 100,
            'D' : 500,
            'M' : 1000
        }
        total = 0
        for i in range(len(s)):
            value = roman[s[i]]
            if i + 1 <len(s) and roman[s[i]] < roman[s[i+1]]:
                total -= value
            else:
                total += value
        return total
"""1. i + 1 < len(s)
Ensures you're not at the last character, so you can safely check the next character s[i + 1].

2. roman[s[i]] < roman[s[i + 1]]
Checks if the current numeral is less than the next.

This is the subtractive pattern (like I before V = 4, not 6).

3. If true: total -= value
Subtract the current value from the total instead of adding it.

You're saying: "this numeral is part of a subtractive pair"."""