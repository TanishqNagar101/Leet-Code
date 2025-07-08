class Solution {
public:

    bool binarySearch(vector<int>& nums, int target){
        int n=nums.size();
        int low{0},high{n-1};
        while(low<=high){
            int mid = low + ((high-low)/2);
            if(nums[mid] == target) return true;
            else if(nums[mid] >target) high = mid-1;
            else low = mid+1;
        }
        return false;
    }
    bool searchMatrix(vector<vector<int>>& nums, int target) {
        int n=nums.size();
        int low{0},high{n-1},ans{0};
        while(low<=high){
            int mid = low + ((high-low)/2);
            cout<<mid<<endl;
            if(nums[mid][0] <= target){
                if(nums[mid][0] == target) return true;
                cout<<mid;
                ans=max(ans,mid);
                low = mid+1;
            }
            else high = mid-1;
        }
        cout<<ans<<endl;
        return binarySearch(nums[ans],target);

    }
};