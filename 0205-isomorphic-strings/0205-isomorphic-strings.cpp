class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.length()!=t.length())return false;
        int hash[256]={0};
        bool ischar[256]={true};
        for(int i=0;i<s.length();i++){
            if(hash[s[i]]==0 && ischar[t[i]]==0){
                hash[s[i]]=t[i];
                ischar[t[i]]=true;
            }
        }
        for(int i=0;i<s.length();i++){
           if(char(hash[s[i]]) != t[i]) return false;
        }
        return true;
    }
};