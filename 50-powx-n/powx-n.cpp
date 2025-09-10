class Solution {
public:


    double rec(double x, int n){
        if(n == 0) return 1;
        return x*rec(x,n-1);
    }
    double myPow(double x, int n) {
        if(n == 0) return 1;
        long long j =n;
        j = abs(j);
        double ans = 1;
        if(j>1000){
            double temp = rec(x,1000);
            while(j>=1000){
                // cout<<ans<<endl;
                ans *= temp;
                j-=1000;
            }
        }
        if(j) ans *= rec(x,j);
        if(n<0) return 1/ans;
        return ans;
    }
};