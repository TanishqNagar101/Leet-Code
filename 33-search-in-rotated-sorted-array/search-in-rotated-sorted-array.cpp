class Solution {
public:
    int findPivot(vector<int>& nums) {
        int low{0},high = nums.size()-1;
        while(low<high){
            int mid=low+((high-low)/2);
            if(nums[mid]>nums[high]) low = mid+1;
            else high =mid;
        }
        return low;
    }
    int binarySearch(vector<int>& nums, int low, int high, int target){
        if(low<0 || high>=nums.size()) return -1;
        if(low == high) return nums[low] == target?low:-1;
        while(low<=high){
            int mid =low+((high-low)/2);
            if(nums[mid] == target) return mid;
            else if(nums[mid] >target) high=mid-1;
            else low = mid+1;
        }
        return -1;
    }
    int search(vector<int>& nums, int target) {
        int n=nums.size();
        int low{0},high{n-1};
        if(n==1) return nums[0] == target?0:-1;
        int piv = findPivot(nums),ans{-1};
        cout<<piv<<endl;
        if(nums[piv] == target) return piv;
        else if(nums[high]<target){
            ans = binarySearch(nums,low,piv-1,target);
            cout<<"here";
        }
        else ans = binarySearch(nums,piv,high,target);
        cout<<ans<<endl;
        return ans == -1?-1:ans;
    }
};