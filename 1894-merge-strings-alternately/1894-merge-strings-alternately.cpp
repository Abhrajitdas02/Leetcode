class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int n=word1.length();
        int m=word2.length();
        string ans="";
        if(m>=n){
            for(int i=0;i<n;i++){
                ans+=word1[i];
                ans+=word2[i];
            }
            for(int i=n;i<m;i++) ans+=word2[i];
        }
        else{
            for(int i=0;i<m;i++){
                ans+=word1[i];
                ans+=word2[i];
            }
            for(int i=m;i<n;i++) ans+=word1[i];
        }
        return ans;
    }
};