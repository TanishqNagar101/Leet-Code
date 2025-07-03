class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        vector<int> v;
        for(int i=0;i<numRows;i++){
            v.clear();
            for(int j=0;j<i+1;j++){
                if(j==0 || j==i) v.push_back(1);
                else{
                    
                    int n = ans[i-1][j]+ans[i-1][j-1];
                    v.push_back(n);
                }
            }
            ans.push_back(v);
        }

        return ans;
    }
};