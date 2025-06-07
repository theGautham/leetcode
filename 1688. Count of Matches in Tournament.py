class Solution(object):
    def numberOfMatches(self, n):
        matches = 0
        teams = n
        while teams > 1:
            if teams % 2 == 0:
                matches += teams // 2
                teams = teams // 2 
            else:
                matches += (teams - 1) // 2
                teams = (teams - 1) // 2 + 1
        return matches
        