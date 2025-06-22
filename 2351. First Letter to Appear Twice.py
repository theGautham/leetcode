class Solution(object):
    def repeatedCharacter(self, s):
        char = set()
        for c in s:
            if c not in char:
                char.add(c)
            else: 
                return c
        


      