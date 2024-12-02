class Solution {
public:
    string reverseWords(string s) {
        istringstream stream(s);
        string word;
        vector<string> words;
        string ans="";
        while(stream >> word){
            words.push_back(word);
        }
        for(int i=words.size()-1;i>=0;i--){
            if(i==0) 
            ans+=words[i];
            else
            ans+=words[i]+' ';
        }
        return ans;
    }
};