class Solution(object):
    def numJewelsInStones(self, jewels, stones):
        jewel_set = set(jewels)
        return sum(s in jewel_set for s in stones)