class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n = strs.size();
        if(n == 1) return strs[0];
        if(n == 0) return "";
        int k=0;
        while(k<min(strs[0].size(),strs[1].size())&&strs[0][k] == strs[1][k]){
            k++;
        }
        if(k == 0) return "";
        string ans = strs[0].substr(0,k);
        for(int i =2;i<n;i++){
            int j=0;
            int t = strs[i].size();
            while(j<min(t,k) && strs[i][j] == ans[j]) j++;
            if(j != k){
                ans = ans.substr(0,j);
                k = j;
            }
        }
        return ans;
    }
};