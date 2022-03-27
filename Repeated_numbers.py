class Solution:
    def findDuplicate(self, nums: List[int]) -> int:
        nums.sort()
        i=1
        while i<len(nums):
            if nums[i] == nums[i-1]:
                break
            else:
                i+=1
        return nums[i]