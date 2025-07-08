class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n= nums.size();
        int low{0},high{n-1},ans{n};
        while(low<=high){
            int mid=(low+high)/2;
            cout<<mid<<endl;
            if(nums[mid] >= target){
                // cout<<mid<<endl;
                ans = min(ans,mid);
                high = mid-1;
            }
            else if(nums[mid] < target) low=mid+1;
        }
        return ans;
    }
};