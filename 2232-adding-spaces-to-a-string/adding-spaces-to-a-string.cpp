class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
        string ans="";
        int i=0,j=0;
        while(i<s.length()){
            if(j<spaces.size() && i==spaces[j]){
                ans+=' ';
                j++;
            }
                ans+=s[i];
                i++;
        }
        return ans;
    }
};