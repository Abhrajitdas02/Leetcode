class Solution {
public:
    bool checkIfPangram(string sentence) {
        unordered_map<char,int> mp;
        for(auto i:sentence)
        mp[i]++;
        for(int i=97;i<=122;i++){
            if(mp[i]<1) return false;
        }
        return true;
    }
};