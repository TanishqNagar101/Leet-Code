class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int a1 = m-1;
        int a2 = n-1;
        int i = nums1.size()-1;
        while(a1>=0 && a2>=0){
            if(nums1[a1]>=nums2[a2]){
                nums1[i] = nums1[a1];
                a1--;
            }
            else if(nums1[a1]<nums2[a2]){
                nums1[i] = nums2[a2];
                a2--;
            }
            i--;
        }
        while(a1>=0){
            nums1[i] = nums1[a1];
            a1--;
            i--;
        }
        while(a2>=0){
            nums1[i] = nums2[a2];
            a2--;
            i--;
        }
    }
};