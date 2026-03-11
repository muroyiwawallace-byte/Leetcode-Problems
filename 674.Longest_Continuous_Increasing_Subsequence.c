class Solution:
    def findLengthOfLCIS(self, nums: List[int]) -> int:
        c=1
        m=1
        for i in range (0,len(nums)-1):
            if nums[i+1]>nums[i]:
                c=c+1
                m=max(c,m)
            else:
                c=1

        return m

        
