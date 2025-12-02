class Solution:
    def revs(self,nums:List[int],start:int,end:int):
        end=end-1
        while(start<=end):
            temp=nums[start]
            nums[start]=nums[end]
            nums[end]=temp
            start+=1
            end-=1
        
    def rotate(self, nums: List[int], k: int) -> None:
        """
        Do not return anything, modify nums in-place instead.
        """
        arr_size=len(nums)
        k%=arr_size
        point=arr_size-k
        self.revs(nums,0,point)
        self.revs(nums,point,arr_size)
        self.revs(nums,0,arr_size)

        