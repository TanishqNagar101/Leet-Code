class Solution {
public:
    int searchInsert(vector<int>& v, int x) {
    int n=v.size();
    int low{0},high{n-1},ans{INT_MAX};
    while(low<=high){
        int mid = (low+high)/2;
        if(v[mid] >=x){
            ans = min(mid,ans);
            high=mid-1;
        }
        else low = mid+1;
    }
    if(ans == INT_MAX) ans=n;
    return ans;
    }
};