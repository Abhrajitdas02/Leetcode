class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i=0;
        int j=0;
        int c=0;
        while(j<t.length()){
            if(s[i]==t[j]){
                i++;
                j++;
                c++;
            }
            else
            j++;
        }
        if(c==s.length()) return true;
        else return false;
    }
};