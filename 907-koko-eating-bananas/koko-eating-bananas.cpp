class Solution {
public:
    long long totalHours(vector<int>& piles, int s){
        long long sum{0};
        if(s<=0) return INT_MAX;
        for(int i:piles){
            sum+=ceil(static_cast<double>(i)/s);
        }
        return sum;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int n=piles.size();
        int low{1};
        long long high=*max_element(piles.begin(),piles.end()),ans=high;
        // cout<<high<<endl;
        while(low<=high){
            long long mid = low+((high-low)/2);
            long long hour = totalHours(piles,mid);
            if(hour<=h){
                cout<<mid<<" This is mid"<<endl;
                cout<<" Made it"<<endl;
                ans = min(ans,mid);
                high = mid-1;
            }
            else low=mid+1;
        }
        return ans;
    }
};