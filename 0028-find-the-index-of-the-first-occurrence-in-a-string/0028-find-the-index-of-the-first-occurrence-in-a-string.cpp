class Solution {  //KMP
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
    int strStr(string haystack, string needle) {
        vector<int>lps(needle.size(),0);
        lpsfind(lps,needle);
        int first=0 , second=0;
        while(first<haystack.size()&& second<needle.size())
        {
            // Match
            if(haystack[first]==needle[second])
            {
                first++,second++;
            }
            //Not Match 
            else
            {
                if(second==0)  // case
                first++;
                else
                second=lps[second-1];
            }
        }
        // anser exist
        if(second==needle.size())
        return first-second;
        return -1;
    }
};