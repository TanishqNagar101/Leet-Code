class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int num = 0;
        for(int i=1;i<=n;i++){
            num^=i;
            num ^= nums[i-1];
        }
        return num;

    }
};