class Solution {
public:
    int characterReplacement(string s, int k) {
        int n=s.length();
        unordered_map<char,int> mp;
        int left=0;
        int maxf=0;
        int ans=0;
        for(int right=0;right<n;right++){
            mp[s[right]]++;
            maxf=max(maxf,mp[s[right]]);

            if((right-left+1)-maxf>k){
                mp[s[left]]-=1;
                left++;
            }else{
                ans=max(ans,(right-left+1));
            }
        }
        return ans;
    }
};