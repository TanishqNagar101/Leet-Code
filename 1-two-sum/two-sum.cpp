class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> v = {0,0};
        int n = nums.size();
        for(int i=0;i<n;i++){
            int dif = target-nums[i];
            for(int j=i+1;j<n;j++){
                if(nums[j] == dif){
                    v[0] = i;
                    v[1] = j;
                    return v;
                }
            }
        }
        return v;

    }
};