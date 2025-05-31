class Solution(object):
    def firstPalindrome(self, words):
        for word in words:
            if word == ''.join(reversed(word)):
                return word
        return ""       