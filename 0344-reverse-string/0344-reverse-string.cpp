class Solution {
public:
    void reverseString(vector<char>& s) {
        int l=s.size();
        for(int i=l-1;i>=l/2;i--){
           char t=s[i];
            s[i]=s[l-1-i];
            s[l-1-i]=t;
      }
    }
};