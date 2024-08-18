class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int> mp;
        for(int i=0;i<s.length();i++) 
        mp[s[i]]++;
        
        vector<pair<int,char>> freq;
        for(auto i:mp){
            freq.push_back({i.second,i.first});
        }
        string ans="";

        sort(freq.rbegin(),freq.rend());
        for(auto i:freq){
           ans+=string(i.first,i.second);
        }
        return ans;
    }
};