class Solution(object):
    def divide(self, dividend, divisor):
        if dividend == -(2**31) and divisor == -1:
            return 2**31 - 1

        sign=1
    
        if (dividend<0 and divisor>0) or (dividend>0 and divisor<0):
            sign=-1
        else:
            sign=1
        dividend= abs(dividend)
        divisor= abs(divisor)

        ans= dividend//divisor
        answer=ans * sign
        return answer
        