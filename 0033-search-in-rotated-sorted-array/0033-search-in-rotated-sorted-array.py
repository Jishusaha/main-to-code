class Solution(object):
    def search(self, nums, target):
        i=0
        while i<len(nums):
            if target!=nums[i]:
                i+=1
            else:
                return i
        return -1

        
        