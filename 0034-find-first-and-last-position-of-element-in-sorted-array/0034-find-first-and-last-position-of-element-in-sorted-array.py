class Solution(object):
    def searchRange(self, nums, target):
        index=[]
        for i in range(len(nums)):
            if nums[i]==target:
                index.append(i)
        if len(index)== 0 :
            return[-1,-1]
        else:
            return[index[0],index[-1]]

            
       
        