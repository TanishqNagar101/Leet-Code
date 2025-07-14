class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int n=arr.size();
        int low{0},high{n-1};
        while(low<high){
            int mid = low+((high-low)/2);
            int diff = arr[mid]-mid-1;
            if(diff >= k) high = mid;
            else low = mid+1;
        }
        cout<<"low ->"<<low<<" high->"<<high;
        int z = arr[high]-high-1;
        if(high == 0 && z !=0 && k<=z){
            return k;
        }
        else if(z>=k){
            high--;
            int temp = k - (arr[high]-high-1);
            return arr[high]+temp;
        }
        else{
            int temp = k-z;
            return arr[high]+temp;
        }
    }
};