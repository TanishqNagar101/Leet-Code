class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int low{0},high=nums.size()-1,ans;
        vector<int>v;
        while(low<high){
            if(nums[low]+nums[high] == target){
                v.push_back(low+1);
                v.push_back(high+1);
                break;
            }
            else if(nums[low]+nums[high] < target) low++;
            else high--;
        }
        return v;
    }
};