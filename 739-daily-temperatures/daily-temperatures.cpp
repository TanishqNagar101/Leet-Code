class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& T) {
        stack<int> s;
        vector<int> ans(size(T));
        for(int cur = size(T)-1; cur >= 0; cur--) {
		// pop till current temp > stack top's temp. All popped element can never be next warmer day for any other elements
            while(size(s) and T[s.top()] <= T[cur]) s.pop(); 
            ans[cur] = s.empty() ? 0 : s.top() - cur;   // no warmer element exists if stack empty. Otherwise, assign distance between stack's top and cur day
            s.push(cur);                                // push onto stack as it can potentially be next warmer day for rest elements
        }
        return ans;
    }
};