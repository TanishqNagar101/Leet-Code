class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<char> s1;
        vector<char> s2;
        for(char i:s){
            s1.push_back(i);
        }
        for(char i:t){
            s2.push_back(i);
        }

       stable_sort(s1.begin(),s1.end());
       stable_sort(s2.begin(),s2.end());
       return s1 == s2;
    }
};