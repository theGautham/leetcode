class Solution(object):
    def thirdMax(self, nums):
        num_set = set(nums)
        if len(num_set) < 3:
            return max(num_set)
        return sorted(num_set, reverse=True)[2]