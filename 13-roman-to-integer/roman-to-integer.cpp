class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char,int> m{{'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000}};
        int first=0,second=0,ans=0;
        for(char i:s){
            int temp = m[i];
            if(temp>second){
                ans -= second;
                ans += (temp-second);
            }
            else{
                ans+=temp;
            }
            second = temp;
        }
        return ans;
    }
};