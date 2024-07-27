class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char,int> mp;
        int c=0;
        for(char ch:s)
        mp[ch]++;
        int flag=0;
        for(auto i:mp){
            if(i.second%2==0)c+=i.second;
            else{
                c+=i.second-1;
                flag=1;
            }
        }
       return (flag)?c+1:c;
    }
};