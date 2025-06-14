class Solution(object):
    def sortedSquares(self, nums):
        squared_nums =  [num * num for num in nums]
        return sorted(squared_nums)
       
        
