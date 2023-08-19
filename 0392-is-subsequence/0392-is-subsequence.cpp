class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i=0,j=0;
        int l1=s.length();
        int l2=t.length();
        if(l1>l2) return false;
        while(i<l1 && j<l2){
            if(s[i]==t[j]){
                i++;
                j++;
            }
            if(s[i]!=t[j]){
                j++;
            }
        }
        if(i==l1)
            return true;
        else
            return false;
    }
};