class Solution:
    def removeOuterParentheses(self, s: str) -> str:
            result = ""
            open_count = 0
            for char in s:
                if char == '(':
                    if open_count > 0:  # Only add '(' if it's not the outermost
                        result += char
                    open_count += 1
                elif char == ')':
                    open_count -= 1
                    if open_count > 0:  # Only add ')' if it's not the outermost
                        result += char
            return result