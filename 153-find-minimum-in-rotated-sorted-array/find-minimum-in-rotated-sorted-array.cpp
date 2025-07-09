class Solution {
public:
    int findMin(vector<int>& nums) {
        int n=nums.size();
        int low{0},high{n-1};
        if(nums[low]<nums[high] || n==1) return nums[low];
        if(n == 2) return nums[0]<nums[1]?nums[0]:nums[1];
        int ans{INT_MAX};
        while(low<high){
            int mid = low+((high-low)/2);
            if(nums[mid] > nums[high]) low = mid+1;
            else high = mid;
        }
        return nums[high];
    }
};