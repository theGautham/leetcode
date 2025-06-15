class Solution(object):
    def findTheDistanceValue(self, arr1, arr2, d):
        count = 0
        for x in  arr1:
            is_far = True
            for y in arr2:
                if abs(x-y) <= d:
                    is_far = False
                    break
            if is_far:
                count += 1
        return count 