class Solution {
public:
    int maxDepth(string s) {
        int ans=0;
        int maxi=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='('){
                ans++;
                maxi=max(maxi,ans);
            }
            else if(s[i]==')')ans--;
        }
        return maxi;
    }
};