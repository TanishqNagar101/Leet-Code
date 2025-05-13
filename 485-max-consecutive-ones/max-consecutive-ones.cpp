class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxCount{0};
        int start {-1};
        for(int i=0;i<nums.size();i++){
            if(start == -1 && nums[i] == 1){
                start = 1;
                continue;
            }
            if(nums[i] == 1 && start != -1) start++;
            if(nums[i] == 0 && start != -1){
                maxCount = maxCount>start?maxCount:start;
                start = -1;
            }
        }
        return maxCount>start?maxCount:start;
    }
};