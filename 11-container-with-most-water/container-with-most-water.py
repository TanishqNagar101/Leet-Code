class Solution:
    def maxArea(self, height: List[int]) -> int:
        ans=-1
        j=len(height)-1
        i=0
        while(i<j):
            temp=min(height[i],height[j])*(j-i)
            if(temp>ans):
                ans=temp
            if(height[j]<=height[i]):
                j-=1
            else:
                i+=1
        return ans