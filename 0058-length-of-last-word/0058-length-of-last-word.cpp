class Solution {
public:
    int lengthOfLastWord(string s) {
        if(s.length()==1) return 1;
        bool count=false;
        int length=0;
       for(int i=s.length()-1;i>=0;i--){
        if(s[i]!=' '){
           count=true;
        length++;
        }
        if(count && s[i]==' '){
            break;
        }
       }
       return length; 
    }
};