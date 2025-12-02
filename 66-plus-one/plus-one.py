class Solution:
    def plusOne(self, nums: List[int]) -> List[int]:
        arr_size=len(nums)
        point=-1
        for i in range(arr_size-1,-1,-1):
            if(nums[i] != 9):
                point=i
                break
        if(point==-1):
            arr=[0]*(arr_size+1)
            arr[0]=1
            return arr
        for i in range(i,arr_size):
            if(nums[i])==9:
                nums[i]=0
            else:
                nums[i]+=1
        return nums
            