class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> m;
        for(char j:s){
            m[j]++;
        }
        for(char j:t){
            m[j]--;
        }
        for(auto i:m){
            if(i.second != 0) return false;
        }
        return true;
    }
};