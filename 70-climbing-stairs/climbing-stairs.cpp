class Solution {
public:
    int foo(int k,vector<int> &cache){
        if(cache[k] != -1) return cache[k];
        if(k <= 0){
            cache[0] = 0;
        }
        else if(k == 1){
            cache[k] = 1;
        }
        else if(k == 2){
            cache[k] = 2;
        }
        else{
            int p = foo(k-1,cache);
            int q = foo(k-2,cache);
            cache[k] = p+q;
        }
        
        return cache[k];
    }
    int climbStairs(int n) {
        vector<int> v(46,0);
        v[1] = 1;
        v[2] = 2;
        for(int i = 3;i<=n;i++){
            v[i] = v[i-1]+v[i-2];
        }
        return v[n];
    }
};