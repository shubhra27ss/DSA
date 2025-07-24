class Solution:
    def myAtoi(self, s: str) -> int:
        i = 0
        n = len(s)
        while i < n and s[i] == " ": #skips spaces
            i += 1
        
        if i==n: #if its only spaces in the input then return 0
            return 0
        
        #sign = 1 for positive and sign = -1 for negative and increment the value of i to move to next element

        sign = 1
        if s[i] == '+':
            i += 1
        elif s[i] == '-' :
            sign = -1
            i += 1
        
        #convert digits to number
        num = 0
        while i < n and s[i].isdigit():
            digit = int(s[i])
            num = num * 10 + digit
            i += 1
        
        #applying the sign to number
        num = num*sign

        INT_MIN = -2**31
        INT_MAX = 2**31 - 1
        if num < INT_MIN:
            return INT_MIN
        if num > INT_MAX:
            return INT_MAX

        return num
        