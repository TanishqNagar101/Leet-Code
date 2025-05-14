class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> v = {0,0};
        int n = nums.size();
        unordered_map<int,int> m;
        for(int i=0;i<n;i++){
            int dif = target-nums[i];
            auto pos = m.find(dif);
            if(pos != m.end()){
                v[0] = pos->second;
                v[1] = i;
                return v;
            }
            else{
                m[nums[i]] = i;
            }
        }
        return v;

    }
};