class Solution {
public:
    bool canMakeSubsequence(string str1, string str2) {
        if(str1.length()<str2.length()) return false;
         int i=0,j=0;
           int x1=str1.length();
           int x2=str2.length();
          for(int i=0;i<x1 && j<x2;){
              if(str1[i]==str2[j]){
                  j++;
              }
              if(str1[i]=='z'){
                  str1[i]='a';
              }
        else{
            str1[i]++;
        }
           if(str1[i]==str2[j]){
               j++;
           }
        i++;
        
          }
        if(j==x2) return true;
        else
            return false;
    }
};