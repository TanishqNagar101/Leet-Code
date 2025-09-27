class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int count {1};
        int prev;
        int place{0};
        for(int i=0;i<nums.size();i++){
            if(i==0){
                prev = i;
                continue;
            }
            if(nums[i] == nums[prev]) continue;
            place++;
            nums[place] = nums[i];
            prev = i;
            count++;
        }
        for(int i:nums){
            cout<<i<<endl;
        }
        return count;
    }
};