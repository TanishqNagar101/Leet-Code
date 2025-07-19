class Solution {
public:
    int myAtoi(string s) {
        if(s.size()==0) return 0;
        stringstream str(s);
        str>>s;
        string ans="";
        if(isalpha(s[0]) || s[0] == '.') return 0;
        bool neg=false;
        bool numstart=false;
        for(char i:s){
            if(isalpha(i) || i == '.') break;
            if(i=='+'||i=='-'){
                if(ans.size() != 0 || numstart) break;
                ans+= i;
            }
            else if(isdigit(i)){
                if(ans.size() == 0 &&i == '0'){
                    numstart=true;
                    continue;
                }
                ans+=i;
            }
        }
        str.clear();
        str.str("");
        str<<ans;
        int k=0;
        str>>k;
        cout<<"This is "<<k;
        return k;
    }
};