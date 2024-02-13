class Solution {
public:
    // int palin(string w){
    //     string s="";
    //     for(int i=w.length()-1;i>=0;i--)
    //         s+=w[i];
    //     if(s==w)return 1;
    //     else return 0;
    // }
    string firstPalindrome(vector<string>& words) {
        for(auto w: words){
        string temp=w;
        reverse(w.begin(),w.end());
        if(w==temp) return w;
        }
        return "";
    }
};