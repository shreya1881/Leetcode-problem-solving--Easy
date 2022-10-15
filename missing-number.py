class Solution:
    def missingNumber(self, nums: List[int]) -> int:
        l=[]
        for i in range(0,len(nums)+1):
            l.append(i)
        for j in l:
            if j not in nums:
                return j
                break