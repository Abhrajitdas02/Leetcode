class Solution {
public:
    int numberOfSubstrings(string s) {
        vector<int> ans(3,-1);
        int count=0;
        for(int i=0;i<s.length();i++){
            ans[s[i]-'a']=i;
            int a=min(ans[0],ans[1]);
            int minind=min(a,ans[2]);
            count+=(1+minind);
        }
        return count;
    }
};