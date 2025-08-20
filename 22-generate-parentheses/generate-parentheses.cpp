class Solution {
public:


    void fun(vector<string>& v, string s, int o, int c){
    if(o==0 && c==0){
        v.push_back(s);
        return;
    }
    if(o > 0) fun(v, s+'(', o-1, c);
    if(c > o) fun(v, s+')', o, c-1);
    return;
    }
    vector<string> generateParenthesis(int n) {
        vector<string> v;

        fun(v,"",n,n);

        return v;
    }
};