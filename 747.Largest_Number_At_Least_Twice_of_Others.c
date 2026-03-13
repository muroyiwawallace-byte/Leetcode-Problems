class Solution:
    def dominantIndex(self, nums: List[int]) -> int:
        d=max(nums)
        for i in range(0,len(nums)):
            if d==nums[i]:
                continue
            if (2*nums[i])<=d:
                continue
            else:
                 return -1
                 break

        return nums.index(d)
