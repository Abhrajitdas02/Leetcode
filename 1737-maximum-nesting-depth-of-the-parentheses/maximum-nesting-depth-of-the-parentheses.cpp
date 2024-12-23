class Solution {
public:
    int maxDepth(string s) {
        int bal=0;
        int maxi=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                bal++;
                if(bal>maxi)maxi=bal;
            }
            else if(s[i]==')'){
                bal--;
            }
        }
        return maxi;
    }
};