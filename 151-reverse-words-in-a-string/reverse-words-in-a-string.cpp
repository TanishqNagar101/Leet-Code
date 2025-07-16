class Solution {
public:
    string reverseWords(string s) {
        int n = s.size();
        string temp="";
        string ans="";
        for(int i=0;i<n;i++){
            if(s[i] != ' '){
                temp+=s[i];
            }
            else if(temp !=""){
                if(ans == "")ans = temp+ans;
                else ans = temp+" "+ans;
                temp = "";
            }
        }
        if(temp != "") {
            if(ans != "") ans =temp+" "+ans;
            else ans += temp;
        }
        return ans;
    }
};