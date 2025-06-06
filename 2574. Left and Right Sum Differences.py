class Solution(object):
    def leftRightDifference(self, nums):
        n = len(nums)
        answer = [0] * n
        leftSum = 0
        totalSum=sum(nums)
        for i in range(n):
            rightSum = totalSum - nums[i] - leftSum
            answer[i] = abs(leftSum - rightSum)
            leftSum += nums[i]
        return answer              
