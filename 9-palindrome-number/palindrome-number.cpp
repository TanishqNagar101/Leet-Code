class Solution {
public:
    bool isPalindrome(int x) {
        int rev {0};
        int y{x};
        if(x<0) return false;
        while(x){
            int temp = x%10;
            x/=10;
            if(rev > INT_MAX/10 || (rev == INT_MAX && temp>7)) return false;
            if(rev < INT_MIN/10 || (rev == INT_MIN && temp<-8)) return false;
            rev = rev*10+temp;
        }
        cout<<y<<" "<<rev;
        if(y == rev) return true;
        
        return false;
    }
};