class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        for(auto word:words)
         if(word==string(rbegin(word),rend(word))) return word;
    return "";
    }
};