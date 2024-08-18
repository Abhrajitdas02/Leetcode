class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.length()!=goal.length()) return false;
        string x="";
        for(int i=0;i<s.length();i++){
           x= s.substr(i)+s.substr(0,i);
           if(goal==x) return true;
        }
        return false;
    }
};