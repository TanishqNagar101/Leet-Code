class Solution {
public:
    int findMin(vector<int>& nums) {
        int n=nums.size();
        int low{0},high{n-1};
        if(nums[low]<nums[high] || n==1) return nums[low];
        if(n == 2) return nums[0]<nums[1]?nums[0]:nums[1];
        int ans{INT_MAX};
        while(low<=high){
            int mid = low+((high-low)/2);
            cout<<mid<<endl;
            if(mid > 0 && nums[mid]<nums[mid-1]) return nums[mid];
            else if(mid == 0 && nums[mid+1]<nums[mid]) return nums[mid+1];
            else if(nums[mid] <nums[high]) high =mid-1;
            else low = mid+1;
        }
        return -1;
    }
};