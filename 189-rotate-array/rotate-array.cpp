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
        if(k == 0||k%nums.size()==0 ) return;
        k = k%nums.size();
        std::rotate(nums.begin(),nums.end()-k,nums.end());
        

    }
};