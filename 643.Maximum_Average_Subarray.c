class Solution:
    def findMaxAverage(self, nums: List[int], k: int) -> float:
        ca=0
        ma=float('-inf')
        s=0
        i=0
        while i<k:
            s=s+nums[i]
            i=i+1
        ca=s/k
        ma=max(ca,ma)
        while i<len(nums):
            s=s+nums[i]-nums[i-k]
            ca=s/k
            ma=max(ma,ca)
            i=i+1

        return ma
      
