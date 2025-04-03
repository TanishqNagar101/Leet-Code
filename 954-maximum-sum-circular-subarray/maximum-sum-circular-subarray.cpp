class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int max{INT_MIN},min{INT_MAX},tmax{0},tmin{0},sum{0};
        for(auto i:nums){
            sum+=i;
            tmax+=i;
            max = (max>tmax)?max:tmax;
            tmax = (tmax<0)?0:tmax;
            tmin+=i;
            min=(min>tmin)?tmin:min;
            tmin = (tmin>0)?0:tmin;
        }
        if(sum == tmin) return max;
        return (max>sum-min)?max:sum-min;
}};