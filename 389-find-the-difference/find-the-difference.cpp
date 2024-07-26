class Solution {
public:
    char findTheDifference(string s, string t) {
        unordered_map<char,int> mp;
        for(auto i:s)
        mp[i]++;
         unordered_map<char,int> mp1;
        for(auto x:t)mp1[x]++;
        for(auto x:t){
            if(mp[x]!=mp1[x]) return x;
        }
        return ' ';
    }
};