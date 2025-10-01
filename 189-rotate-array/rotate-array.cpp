class Solution {
public:
    void rev(vector<int>& nums,int start,int end){
        while(start<end){
            int temp = nums[start];
            nums[start] = nums[end];
            nums[end] = temp;
            start++;
            end--;
        }
    }
    void rotate(vector<int>& nums, int k) {
        k = k%nums.size();
        
        int end = nums.size()-k-1;
        rev(nums,0,end);
        rev(nums,end+1,nums.size()-1);
        rev(nums,0,nums.size()-1);
    }
};