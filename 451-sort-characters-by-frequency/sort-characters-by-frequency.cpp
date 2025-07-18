class Solution {
public:
    static bool cmp(pair<char,int>&a , pair<char,int>&b){
        return a.second>b.second;
    }
    string frequencySort(string s) {
         vector<pair<char,int>> v;
         map<char,int> h;
         for(char i:s) h[i]++;
         for(auto& i:h){
            v.push_back(i);
         }
         sort(v.begin(),v.end(),cmp);
         string ans = "";
         for(auto& i:v){
            string temp(i.second,i.first);
            ans+=temp;
         }
         return ans;
    }
};