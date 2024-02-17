class Solution {
public:
    string lastNonEmptyString(string s) {

        //we need to find out the max freq
        int maxVal = 0;
        unordered_map<char,int>mp;
        for(int i = 0; i < s.length() ; i++){
            mp[s[i]]++;
            if(mp[s[i]] > maxVal) maxVal = mp[s[i]];
        }

        unordered_set<char>st;
        for(auto it = mp.begin() ; it!=mp.end() ; it++){
             if(it->second == maxVal) st.insert(it->first);
        }

        string ans = "";
        for(int i = s.length() -1 ; i >= 0 ; i--){
            if(st.find(s[i]) != st.end())  //set m mil gaya
            {
                 ans.push_back(s[i]);
                 st.erase(s[i]);
            }
        }
        
        reverse(ans.begin(),ans.end());
        return ans;
    }
};