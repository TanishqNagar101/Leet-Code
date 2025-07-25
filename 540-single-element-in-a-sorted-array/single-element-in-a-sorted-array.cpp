class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n=nums.size();
        int low{0},high{n-1};
        while(low<high){
              int mid = low + ((high-low)/2);
              cout<<mid<<endl;
              if(nums[mid] == nums[mid-1]){
                if((mid-1)% 2 == 0) low=mid+1;
                else high = mid-2;
              }
              else if(nums[mid] == nums[mid+1]){
                if((mid)% 2 == 0) low=mid+2;
                else high = mid-1;
              }
              else return nums[mid];
        }
        return nums[low];
    }
};