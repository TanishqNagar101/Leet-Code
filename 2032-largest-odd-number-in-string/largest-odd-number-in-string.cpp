class Solution {
public:
    string largestOddNumber(string num) {
        int n = num.size()-1;
        for(int i=n;i>=0;i--){
            int temp = num[i]-'0';
            cout<<temp<<endl;
            if(temp%2 != 0) return num.substr(0,i+1);
        }
        return "";
    }
};