class Solution {
public:
    int isPalin(string s){
        for(int i=0;i<s.length()/2;i++){
            if(s[i]!=s[s.length()-i-1]) return 0;
        }
        return 1;
    }
    string firstPalindrome(vector<string>& words) {
        for(auto i:words)
        if(isPalin(i)==1) return i;
    return "";
    }
};