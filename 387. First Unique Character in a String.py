class Solution(object):
    def firstUniqChar(self, s):
        count = {}
        for num in s:
            count[num] = count.get(num,0)+1

        for i in range(len(s)):
            if count[s[i]] == 1:
                return i

        return -1        


