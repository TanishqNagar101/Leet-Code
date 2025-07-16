class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n1 = nums1.size();
        int n2 = nums2.size();
        if(n2<n1) return findMedianSortedArrays(nums2,nums1);
        int l1,l2,r1,r2;
        int low = 0, high = n1;
        int half = (n1+n2)/2;
        int first,second;
        while(low<=high){
            int mid1 = low + ((high-low)/2);
            int mid2 = half-mid1;
            if(mid1-1>=0) l1 = nums1[mid1-1];
            else l1 = INT_MIN;
            if(mid2-1>=0) l2=nums2[mid2-1];
            else l2 = INT_MIN;
            if(mid1<n1 && mid1>=0)r1=nums1[mid1];
            else r1=INT_MAX;
            if(mid2<n2 && mid2>=0)r2=nums2[mid2];
            else r2=INT_MAX;
            cout<<"The value "<<r1<<" "<<r2<<" "<<l1<<" "<<l2<<endl;
            if(r1>=l2 &&r2>=l1){
                first = max(l1,l2);
                second = min(r1,r2);
                break;
            }
            else if(!(r2>l1)) high = mid1-1;
            else low = mid1+1;
        }
        cout<<first<<" "<<second<<endl;
        if((n1+n2)%2==0) return static_cast<double>(first+second)/2;
        else return second;
    }
};