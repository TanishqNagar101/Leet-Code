class Solution {
public:

    int lowerBound(vector<int>& nums, int target){
        int n=nums.size();
        int low{0},high=n-1,ans{n};
        while(low<=high){
            int mid=(low+high)/2;
            if(nums[mid]==target){
                ans = min(ans,mid);
                high=mid-1;
            }
            else if(nums[mid]>target) high = mid-1;
            else low = mid+1;
        }
        if(ans == n) ans = -1;
        return ans;
    }
    int upperBound(vector<int>& nums, int target){
        int n=nums.size();
        int low{0},high=n-1,ans{-1};
        while(low<=high){
            int mid=(low+high)/2;
            if(nums[mid]==target){
                ans = max(mid,ans);
                low = mid+1;
            }
            else if(nums[mid]>target) high = mid-1;
            else low = mid+1;
        }
        return ans;
    }

    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>v(2,-1);
        int n = nums.size();
        if(n<=0) return v;
        v[0] = lowerBound(nums,target);
        v[1] = upperBound(nums,target);
        cout<<v[0]<<" "<<v[1];
        return v;

    }
};