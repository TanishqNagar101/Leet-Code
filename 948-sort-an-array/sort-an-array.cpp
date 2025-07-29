class Solution {
public:
    void merge(vector<int>& v, int start, int mid, int end){
        int left = start;
        int right = mid+1;
        vector<int>temp(end-start+1,-1);
        int i = 0;
        while(left<=mid && right<=end){
            if(v[left]<=v[right]){
                temp[i] = v[left];
                left++;
            }
            else{
                temp[i] = v[right];
                right++;
            }
            i++;
        }
        while(left<=mid){
            temp[i] = v[left];
            i++;
            left++;
        }
        while(right<=end){
            temp[i] = v[right];
            i++;
            right++;
        }
        i=0;
        for(int j=start;j<=end;j++){
            v[j] = temp[i];
            i++;
        }
    }
    void mergeSort(vector<int>& v,int start, int end){
        if(start>=end) return;
        int mid = (start+end)>>1;
        mergeSort(v,start,mid);
        mergeSort(v,mid+1,end);
        merge(v,start,mid,end);
    }
    vector<int> sortArray(vector<int>& nums) {
        mergeSort(nums,0,nums.size()-1);
        return nums;
    }
};