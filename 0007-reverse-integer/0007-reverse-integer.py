class Solution(object):
    def reverse(self, x):
       sign= -1 if x<0 else 1
       n=abs(x)
       t=0
       while(n>0):
        t=t*10 + n%10
        n=n//10
       t= sign* t
       if t<-2**31 or t>2**31 :
            return 0
       else:
        return t