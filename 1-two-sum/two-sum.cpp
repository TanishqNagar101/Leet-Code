class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> m;
        vector<int>v;
        for(int i=0;i<nums.size();i++){
            int temp =target-nums[i];
            if(m.find(temp) != m.end()) {
                auto k = m.find(temp);
                v.push_back(k->second);
                v.push_back(i);
                return v;
            }
            else{
                m.insert({nums[i],i});
            }
        }
        return v;
    }
};