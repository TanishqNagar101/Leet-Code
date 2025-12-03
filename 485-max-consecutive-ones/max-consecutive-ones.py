class Solution:
    def findMaxConsecutiveOnes(self, nums: List[int]) -> int:
        ans=0
        temp=0
        for i in nums:
            if i==1:
                temp+=1
            else:
                ans=max(ans,temp)
                temp=0
        ans=max(temp,ans)
        return ans