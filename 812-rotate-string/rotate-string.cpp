class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.size()!=goal.size()) return false;
        int n=s.size();
        string ans="";
        for(int i=0;i<n;i++){
            ans=s.substr(i)+s.substr(0,i);
            if(ans==goal) return true;
        }
        return false;
    }
};