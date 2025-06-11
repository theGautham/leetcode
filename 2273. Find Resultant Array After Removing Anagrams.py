class Solution(object):
    def removeAnagrams(self, words):
        stack = []
        for word in words:
            if not stack or not self.isAnagram(stack[-1],word):
                stack.append(word)
        return stack

    def isAnagram(self,s1,s2):
        if len(s1) != len(s2):
            return False
        return sorted(s1) == sorted(s2)