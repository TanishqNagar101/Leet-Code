class Solution {
public:
    string reverseWords(string s) {
        string ans="";
        stringstream ss;
        ss<<s;
        string temp;
        while(ss>>temp){
            if(ans.empty()) ans=temp+ans;
            else ans = temp+" "+ans;
        }
        return ans;
    }
};