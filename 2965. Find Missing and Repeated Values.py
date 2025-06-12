class Solution(object):
    def findMissingAndRepeatedValues(self, grid):
        n = len(grid)
        seen = set()
        a = 0
        for i in range(n):
            for j in range(n):
                if grid[i][j] in seen:
                    a = grid[i][j]
                else:
                    seen.add(grid[i][j])
        expected_sum = n * n *(n * n + 1) // 2
        actual_sum = sum(grid[i][j] for i in range(n) for j in range(n))
        b = a + (expected_sum-actual_sum)
        return [a,b]