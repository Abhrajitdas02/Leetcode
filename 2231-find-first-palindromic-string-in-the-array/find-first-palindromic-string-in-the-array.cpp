class Solution {
public:
    int palin(string w){
        string s="";
        for(int i=w.length()-1;i>=0;i--)
            s+=w[i];
        if(s==w)return 1;
        else return 0;
    }
    string firstPalindrome(vector<string>& words) {
        int n = words.size();
        for(int i=0;i<n;i++)
           if(palin(words[i]) == 1) return words[i];
        return "";
    }
};