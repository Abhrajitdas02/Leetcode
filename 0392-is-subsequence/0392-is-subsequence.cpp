class Solution {
public:
    bool isSubsequence(string s, string t) {
        int n=t.size();
        int i=0;
        int j=0;
        int c=0;
        while(j<n){
            if(s[i]==t[j]){
                i++;
                c++;
            }
            j++;
        }
        if(c==s.length()) return true;
        else return false;
    }
};