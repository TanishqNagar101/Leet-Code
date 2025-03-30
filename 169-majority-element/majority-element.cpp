class Solution {
public:
    int majorityElement(vector<int>& c) {
        int val;
        int count = 0;
        int l = c.size();
        for(int i = 0;i<l;i++){
            if(count == 0){
                val = c[i];
                count++;
            }
            else if(val == c[i]){
                count++;
            }
            else{
                count--;
            }
        }
        return val;

}};