class Solution {
public:
    bool isPalindrome(int x) {
        long rev {0};
        long y{x};
        if(x<0) return false;
        while(x){
            int temp = x%10;
            x/=10;
            rev = rev*10+temp;
        }
        cout<<y<<" "<<rev;
        if(y == rev) return true;
        
        return false;
    }
};