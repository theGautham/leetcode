class Solution(object):
    def sumZero(self, n):
        arr = []
        if n % 2 == 0:
            for i in range(1, n//2+1):
                arr.append(i)
                arr.append(-i)
        else:
            arr.append(0)
            for i in range(1, n//2+1):
                arr.append(i)
                arr.append(-i)
        return arr
