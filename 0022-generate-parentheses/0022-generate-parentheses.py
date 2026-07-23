class Solution(object):
    def generateParenthesis(self, n):
        result=[]

        def parenthesis(bracket,open_count, close_count):
            if len(bracket)==2*n:
                result.append(bracket)
                return
            
            if open_count<n:
                parenthesis(bracket+"(", open_count+1, close_count)

            if close_count< open_count:
                parenthesis(bracket+")", open_count, close_count+1)
        
        parenthesis("",0,0)
        return result        

        
        