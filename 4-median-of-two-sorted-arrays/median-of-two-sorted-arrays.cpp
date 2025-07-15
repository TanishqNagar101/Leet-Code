class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int p1=0,p2=0;
        int n = nums1.size()+nums2.size();
        int cnt=0,req = n/2,prev,current;
        while(p1<nums1.size() || p2<nums2.size()){
            cout<<"Required COunt->"<<cnt<<" ,Current->"<<current<<" ,prev->"<<prev<<endl;
            cnt++;
            if(p1 == nums1.size()){
                prev=current;
                current = nums2[p2];
                p2++;
            }
            else if(p2 == nums2.size()){
                prev=current;
                current = nums1[p1];
                p1++;
            }
            else if(nums1[p1]<=nums2[p2]){
                prev=current;
                current = nums1[p1];
                p1++;
            }
            else{
                prev=current;
                current = nums2[p2];
                p2++;
            }
            if(cnt>req) break;
        }
        if(n%2 == 0) return (static_cast<double>(current)+prev)/2;
        return current;
    }
};