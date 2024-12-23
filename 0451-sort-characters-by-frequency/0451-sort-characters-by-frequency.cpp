class Solution {
public:
    string frequencySort(string s) {
     unordered_map<char,int> mp;
     for(auto i:s)
     mp[i]++;
     vector<pair<int,char>> ans;
     for(auto i:mp){
        ans.push_back({i.second,i.first});
     }
     sort(ans.rbegin(),ans.rend());
     string ans1;
     for(auto i:ans){
     ans1+=string(i.first,i.second);
     }
     return ans1;
    }
};