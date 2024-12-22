class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n=strs.size();
        int len=strs[0].length();
        char x;
        string ans="";
        for(int i=0;i<len;i++){
            x=strs[0][i];
            int j=0;
            while(j<n){
                if(strs[j][i]!=x) return ans;
                j++;
            }
            ans+=x;
        }
        return ans;
    }
};