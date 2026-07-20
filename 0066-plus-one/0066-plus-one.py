class Solution(object):
    def plusOne(self, digits):
        num=0
        if len(digits)==0:
            num+=1
            return[num]
        else:
            num=int("".join(map(str,digits)))
            num+=1
            return list(map(int, str(num)))



        
        