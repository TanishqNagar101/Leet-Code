class Solution {
public:

    bool isValid(vector<int>& arr, int sum, int k){
        int ans=0,s=0,m=0;
        for(int i:arr){
            s+=i;
            if(s>=sum){
                ans++;
                if(s>sum){
                    m=max(m,s);
                    s=i;
                }
                else s=0;
            }
        }
        if(s>0) ans++;
        return ans<=k;
    }
    int splitArray(vector<int>& nums, int k) {
        int n = nums.size();
        if(k >n) return -1;
        int high = 0,low = -1;
        for(int i:nums){
            low = max(i,low);
            high+=i;
        }
        int ans = high;
        if(n == k) return low;
        while(low<=high){
            int mid = low + ((high-low)/2);
            bool val = isValid(nums, mid,k);
            if(val){
                ans = min(mid,ans);
                high = mid-1;
            }
            else low = mid+1;
        }
        return ans;
    }
};