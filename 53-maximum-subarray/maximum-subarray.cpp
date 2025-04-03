class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int max {nums[0]};
        int curr_sum {0};
        for(auto i:nums){
            curr_sum = (curr_sum>0) ? curr_sum:0;
            curr_sum +=i;
            max = (max>curr_sum) ? max:curr_sum;
        }
        return max;
    }
};