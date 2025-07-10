class Solution {
public:
    int validWeight(vector<int>& nums,int s,int d){
        int sum{0},ans{0};
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            if(sum==s){
                sum=0;
                ans++;
            }
            else if(sum>s){
                sum=0;
                ans++;
                sum = nums[i];
            }
        }
        if(sum>0)ans++;
        return ans>d?-1:ans;
        
    }
    int splitArray(vector<int>& weights, int days) {
        int total_sum{0},m{INT_MIN};
        for(int i:weights){
            total_sum+=i;
            m=max(i,m);
        }
        int low{m},high{total_sum},ans{total_sum};
        while(low<=high){
            int mid = low+((high-low)/2);
            int k = validWeight(weights,mid,days);
            cout<<"Low->"<<low<<" high->"<<high<<" Weight ->"<<k<<endl;
            if(k!=-1){
                ans = min(ans,mid);
                high = mid-1;
            }
            else low = mid+1;
        }
        return ans;

    }
};