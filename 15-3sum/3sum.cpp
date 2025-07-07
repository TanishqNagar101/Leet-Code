class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int j=0,k=nums.size()-1;
        sort(nums.begin(),nums.end());
        vector<vector<int>> v;
        for(int i=0;i<nums.size();i++){
            if (i > 0 && nums[i] == nums[i-1]) {
                continue;
            }
            j=i+1;
            k=nums.size()-1;
            while(j<k){
                int temp = nums[i]+nums[j]+nums[k];
                if(temp == 0){
                    v.push_back({nums[i],nums[j],nums[k]});
                    j++;
                    while (nums[j] == nums[j-1] && j < k) {
                        j++;
                    }
                }
                else if(temp>0) k--;
                else j++;
            }
        }
        return v;
    }
};