class Solution(object):
    def isAcronym(self, words, s):
        if len(words) != len(s):
            return False
        if not words or not s:
            return False
        result = ''.join(word[0] for word in words if word)
        return result == s