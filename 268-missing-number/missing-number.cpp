class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int orig = 0;
        int asum = 0;
        for(int i=1;i<=n;i++){
            orig+=i;
            asum += nums[i-1];
        }
        return orig-asum;

    }
};