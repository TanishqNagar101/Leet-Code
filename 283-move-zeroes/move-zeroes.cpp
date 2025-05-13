class Solution {
public:
    void moveZeroes(vector<int>& arr) {
     if(arr.size()<=1) return;
     int z_pos{-1};
     for(int i=0;i<arr.size();i++){
        if(z_pos == -1 && arr[i] == 0){
            z_pos = i;
        }
        else if(arr[i] != 0 && z_pos != -1){
            arr[z_pos] = arr[i];
            arr[i] = 0;
            z_pos++;
        }
     }   
    }
};