class Solution {
public:
    int reverse(int x)
    {
        long add=0;
        while(x!=0)
        {   
            add=add*10 + x%10;
            x=x/10;
        }
        if(add<INT_MIN || add> INT_MAX)return 0;
        return int(add);
    }

    bool isPalindrome(int x) {
        if(x<0) return false;
        int a = x;
        int b=reverse(x);

        if(b==a)return true;

        return false;
    }
};