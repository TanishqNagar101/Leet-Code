class NumArray {
public:
    vector<int> v;
    NumArray(vector<int>& nums) {
        for(int i=1;i<nums.size();i++){
            nums[i] += nums[i-1];
        }
        v = nums;
    }
    
    int sumRange(int left, int right) {
        if(left == 0) return v[right];
        int ans = v[right]-v[left-1]; 
        return ans;
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */