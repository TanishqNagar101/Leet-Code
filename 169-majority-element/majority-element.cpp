class Solution {
public:
    int majorityElement(vector<int>& c) {
        int l = c.size();
        unordered_map<int,int> mpp;
        for(int i = 0; i<l;i++){
            mpp[c[i]]++;
        }
        for(auto i:mpp){
            if(i.second> l/2){
                return i.first;
            }
        }
        return -1;

}};