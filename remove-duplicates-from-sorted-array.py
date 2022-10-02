from ast import List


class Solution:
    def removeDuplicates(self, nums: List[int]) -> int:
         for num in range(len(nums)-1,-1,-1):
            if len(nums) == 1:
                continue
            if nums[num]==nums[num-1]:
                nums.remove(nums[num])
            continue
            return nums
        