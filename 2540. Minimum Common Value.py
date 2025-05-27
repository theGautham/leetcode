class Solution(object):
    def getCommon(self, nums1, nums2):
        if nums1 is None or nums2 is None or len(nums1) < 1 or len(nums2) < 1:
            return -1
        
        nums1.sort()
        nums2.sort()
        
        i, j = 0, 0
        while i < len(nums1) and j < len(nums2):
            if nums1[i] == nums2[j]:
                return nums1[i]
            elif nums1[i] < nums2[j]:
                i += 1
            else:
                j += 1
        
        return -1
        