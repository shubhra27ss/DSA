class Solution:
    def isValid(self, s: str) -> bool:
        stack = []
        # Mapping of closing brackets to their corresponding opening brackets
        mapping = {')': '(', '}': '{', ']': '['}

        for char in s:
            if char in mapping:
                # Pop the top of the stack if it's not empty; else use dummy value
                top = stack.pop() if stack else '#'
                if mapping[char] != top:
                    return False
            else:
                # It's an opening bracket, push to stack
                stack.append(char)

        # If stack is empty, all brackets matched
        return not stack
            