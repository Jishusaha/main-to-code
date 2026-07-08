class Solution(object):
    def intToRoman(self, num):
        roman=[(1000,'M'),(900,'CM'),(800,'DCCC'),(700,'DCC'),(600,'DC'),(500,'D'),(400,'CD'),(300,'CCC'),(200,'CC'),(100,'C'),(90,'XC'),(80,'LXXX'),(70,'LXX'),(60,'LX'),(50,'L'),(40,'XL'),(30,'XXX'),(20,'XX'),(10,'X'),(9,'IX'),(5,'V'),(4,'IV'),(1,'I')]

        total=""
        
        for value, symbol in roman:
            while num >= value:
                total += symbol
                num -= value
        return total

         
       
        