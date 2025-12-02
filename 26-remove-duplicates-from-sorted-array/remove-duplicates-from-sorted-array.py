class Solution:
    def removeDuplicates(self, nums: List[int]) -> int:
        curr=0
        start=1
        for i in range(len(nums)):
            if(nums[i]==nums[curr]):
                continue
            if(nums[i] != nums[curr]):
                start+=1
                nums[curr+1] = nums[i]
                curr+=1
        return start
