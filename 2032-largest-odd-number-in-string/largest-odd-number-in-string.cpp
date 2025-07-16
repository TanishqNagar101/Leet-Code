class Solution {
public:
    string largestOddNumber(string num) {
        string s;
        int n = num.size()-1;
        for(int i=n;i>=0;i--){
            int temp = num[i]-'0';
            cout<<temp<<endl;
            if(temp%2 != 0) return num.substr(0,min(i+1,n+1));
        }
        return "";
    }
};