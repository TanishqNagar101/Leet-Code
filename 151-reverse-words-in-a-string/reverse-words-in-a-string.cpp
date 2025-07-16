class Solution {
public:
    string reverseWords(string s) {
        int n = s.size();
        stringstream k(s);
        string temp="";
        string ans="";
        while(k>>temp){
            if(ans == "") ans+=temp;
            else ans = temp + " "+ans;
        }
        return ans;
    }
};