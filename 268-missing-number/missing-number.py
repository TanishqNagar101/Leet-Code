class Solution:
    def missingNumber(self, nums: List[int]) -> int:
        n=len(nums)
        orignal_sum=(n*(n+1))/2
        array_sum=sum(nums)
        print(f"n:{n},orig_sum:{orignal_sum},arr_sum:{array_sum}")
        return int(orignal_sum-array_sum)