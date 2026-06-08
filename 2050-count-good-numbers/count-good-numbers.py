class Solution:
    def myFun(self,s: str, n: int, pos: int) -> int:
        if(n == pos):
            return 1
        ans = 0
        if(pos%2 == 0):
            for i in range(0,10,2):
                ans += self.myFun(s+str(i),n,pos+1)
        else:
            for i in [2,3,5,7]:
                ans += self.myFun(s+str(i),n,pos+1)
        return ans
    def countGoodNumbers(self, n: int) -> int:
        # ans = self.myFun("",n,0)
        MOD = (10**9)+7
        even = 0
        odd = 0
        if (n%2 != 0):
            even += 1
        even += n//2
        odd = n - even
        ans = (pow(5,even,MOD) * pow(4,odd,MOD))
        return ans%MOD