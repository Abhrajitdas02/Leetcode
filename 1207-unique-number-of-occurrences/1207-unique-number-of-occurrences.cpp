class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int> mp;
        for(int i=0;i<arr.size();i++)
            mp[arr[i]]++;
        int c=0;
         unordered_set<int> s;
         for(auto& [x,c]: mp){
             if(s.count(c)>=1) return false;
             s.insert(c);
         }
        return true;
    }
};