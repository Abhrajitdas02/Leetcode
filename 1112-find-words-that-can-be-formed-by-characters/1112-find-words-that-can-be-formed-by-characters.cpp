class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
       unordered_map<char,int> mp;
       for(auto x: chars)
       mp[x]++;
       int c=0;
       for(auto word:words){
        unordered_map<char,int> mp1;
        bool form=true;
        for(char i:word){
             if(!mp[i]||mp1[i]==mp[i]){
             form=false;
             break;
        }
        mp1[i]++;
        }
        if(form==true) c+=word.size();
       }
        return c;
       } 
    };