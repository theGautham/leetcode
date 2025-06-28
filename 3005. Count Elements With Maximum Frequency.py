class Solution(object):
    def maxFrequencyElements(self, nums):
        freq = {}
        maxFreq = 0
        for num in nums:
            freq[num] = freq.get(num,0) + 1
        for frequency in freq.values():
            maxFreq = max(maxFreq,frequency)
        freqOfFrequency = 0
        for frequency in freq.values():
            if maxFreq == frequency:
                freqOfFrequency += 1
        return maxFreq * freqOfFrequency



        