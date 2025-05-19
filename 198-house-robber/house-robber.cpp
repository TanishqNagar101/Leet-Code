class Solution {
public:
    // int foo(int n, vector<int>& nums){
    //     if(n>= nums.size()){
    //         return 0;
    //     }
    //     int sum1 = nums[n]+foo(n+2,nums);
    //     int sum2 = foo(n+1,nums);
    //     return max(sum1,sum2);
    // }
    int rob(vector<int>& nums) {
        int n = nums.size();
        if(n <=1) return nums[0];
        vector<int> v(n,-1);
        v[0] = nums[0];
        v[1] = max(nums[1],nums[0]);
        for(int i=2;i<n;i++){
            v[i] = max(v[i-1],v[i-2]+nums[i]);
        }
        for(int i:v){
            if(i == -1) break;
            cout<<i<<endl;
        }
        return v[n-1];
    }
};