class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temprature) {
        int n = temprature.size();
        vector<int> ans(n,0);
        stack<int> st;
        for(int i=n-1;i>=0;i--){
            if(st.empty()){
                st.push(i);
                continue;
            }
            if(temprature[st.top()]>temprature[i]){
                ans[i]=st.top()-i;
                st.push(i);
                continue;
            }
            while(!st.empty() && temprature[st.top()]<=temprature[i]){
                st.pop();
            }
            if(st.empty()){
                st.push(i);
                continue;
            }
            ans[i]=st.top()-i;
            st.push(i);
            
        }
        return ans;
    }
};