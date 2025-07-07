class Solution {
public:
    int binarySearch(vector<int>& nums,int low,int high,int target){
        int ans{-1};
        while(low<=high){
            int mid = (low+high)/2;
            if(nums[mid] == target){
                ans=mid;
                break;
            }
            else if(nums[mid] < target) low++;
            else high--;
        }
        return ans;
    }
    vector<int> twoSum(vector<int>& nums, int target) {
        int prev{nums[0]};
        for(int i=0;i<nums.size();i++){
            if(prev == nums[i] && i!=0) continue;
            int temp = target-nums[i];
            if(temp >=nums[i]){
                int k = binarySearch(nums,i+1,nums.size()-1,temp);
                if(k != -1) return {i+1,k+1};
            }
            else{
                int k = binarySearch(nums,0,i-1,temp);
                if(k != -1) return {k+1,i+1};
            }
            prev = nums[i];
        }
        return {-1,-1};
    }
};