class Solution {
public:
    int strStr(string haystack, string needle) {
        if(haystack==needle) return 0;
        int i=haystack.length();
        int j=needle.length();
       for(int k=0;k<=(i-j);k++){
        if(haystack.substr(k,j) == needle) return k;
       }
        return -1;
    }
};