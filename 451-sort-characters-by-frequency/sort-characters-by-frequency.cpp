class Solution {
public:
    string frequencySort(string s) {
        string ans="";
        unordered_map<char,int> mp1;
        for(auto i:s)
        mp1[i]++;
        
        vector<pair<int,char>> v;
        for(auto i:mp1)
        v.push_back({i.second,i.first});
        sort(v.rbegin(),v.rend());

        for(auto i:v)
        ans+=string(i.first,i.second);
        return ans;
    }
};