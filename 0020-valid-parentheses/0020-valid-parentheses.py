class Solution(object):
    def isValid(self, s):
        result=[]
        pairs={
            ')':'(',
            '}':'{',
            ']':'['
        }
        for char in s:
            if char in "[{(":
                result.append(char)
            else:
                if not result or result[-1] != pairs[char]:
                    return False
                result.pop()

        return len(result)==0

        
        