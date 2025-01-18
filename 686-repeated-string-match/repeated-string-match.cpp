class Solution {
public:
    void lpsfind(vector<int>&lps,string s){
    int pre=0,suf=1;
    while(suf<s.size()){
        if(s[pre]==s[suf])
        {
            lps[suf]=pre+1;
            suf++,pre++;
        }
        else
        {
            if(pre==0)
            {
                lps[suf]=0;
                suf++;
            }
            else
            {
                pre=lps[pre-1];
            }
        }
    }
}
    int kmp(string st,string b){
        vector<int> lps(b.size(),0);
        lpsfind(lps,b);
        int first=0,second=0;
        while(first<st.size() && second<b.size()){
            if(st[first]==b[second]){
                first++;
                second++;
            }
            else{
                if(second==0){
                    first++;
                }
                else{
                    second=lps[second-1];
                }
            }
        }

        if(second==b.size()) return 1;
        else return 0;
    }
    int repeatedStringMatch(string a, string b) {
        if(a==b) return 1;

        string st=a;
        int c=1;
        int m=b.size();
        while(st.size()<m){
            st+=a;
            c++;
        }

        if(kmp(st,b)==1) return c;

        if(kmp(st+a,b)==1) return c+1;
        return -1;
    }
};