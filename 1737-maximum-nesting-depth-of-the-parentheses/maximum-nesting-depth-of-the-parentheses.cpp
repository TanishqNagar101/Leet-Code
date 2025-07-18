class Solution {
public:
    int maxDepth(string s) {
        int count = 0;
        int ans=0;
        for(char i:s){
            if(i == '('){
                count++;
                ans = max(ans,count);
            }
            else if(i == ')'){
                count--;
            }
        }
        return ans;
    }
};