class Solution:
    def findDisappearedNumbers(self, nums: List[int]) -> List[int]:
        r=len(nums)
        nums=set(nums)
        e=[]
        for i in range(1,r+1):
            if i not in nums:
                e.append(i)
        return e
        
