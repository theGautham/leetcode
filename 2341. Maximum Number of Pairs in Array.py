class Solution(object):
    def numberOfPairs(self, nums):
        freq = {}
        for num in nums:
            freq[num] = freq.get(num,0) + 1
        
        pairs = 0
        for count in freq.values():
            pairs += count // 2
        
        leftovers = len(nums) - 2 * pairs
        return [pairs,leftovers]
