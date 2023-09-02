class Solution {
    private:
    string palin(string st){
        string r="";
        int l=st.length();
        for(int i=l-1;i>=0;i--)
            r=r+st[i];
        return r;
    }
public:
    string finalString(string s) {
        int l1=s.length();
        string a="";
        for(int i=0;i<l1;i++){
            if(s[i]!='i') a=a+s[i];
            else if(s[i]=='i') a=palin(a);
        }
        return a;
    }
};