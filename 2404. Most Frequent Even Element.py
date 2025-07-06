class Solution(object):
    def mostFrequentEven(self, nums):
        freq = {}
        for num in nums:
            if num % 2 == 0:
                freq[num] = freq.get(num,0) + 1  
        max_freq = 0
        result = -1 
        for num, count in freq.items():
            if count > max_freq or (count == max_freq and num < result):
                max_freq = count
                result = num
        return result     