class Solution(object):
    def distributeCandies(self, candyType):
        return min(len(set(candyType)), len(candyType) // 2)
        