class Solution {
public:
    bool halvesAreAlike(string s) {
      int len =s.length();
        int x=len/2;
        int c1=0,c2=0;
        for(int i=0;i<x;i++)
        {
           s[i]=tolower(s[i]);
           if(s[i]=='a' || s[i]=='i' || s[i]=='e' || s[i]=='o' || s[i]=='u') c1++;
        }
        for(int i=x;i<len;i++)
        {
            s[i]=tolower(s[i]);
           if(s[i]=='a' || s[i]=='i' || s[i]=='e' || s[i]=='o' || s[i]=='u') c2++;
        }
        if(c1==c2) return true;
        else return false;
    }
};