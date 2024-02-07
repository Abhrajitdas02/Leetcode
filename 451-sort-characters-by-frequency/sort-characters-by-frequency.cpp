class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int>mp;
        string x="";
        for(int i=0;i<s.length();i++)
        mp[s[i]]++;
       priority_queue<pair<int,char>> pq;
       for(auto it : mp){
           pq.push({it.second,it.first});
       }
       while(!pq.empty()){
           int fr= pq.top().first;
           char ch = pq.top().second;
           pq.pop();
           for(int i=0;i<fr;i++)
            x+=ch;
       }
       return x;
    }
};