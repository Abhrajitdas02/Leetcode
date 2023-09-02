class Solution {
public:
    bool canBeEqual(string s1, string s2) {
        char t;
       for(int i=0;i<2;i++){
           if(s1[i]==s2[i+2]){
               t=s1[i];
               s1[i]=s1[i+2];
               s1[i+2]=t;
           }
       }
        if(s1==s2) return true;
        else return false;
    }
};