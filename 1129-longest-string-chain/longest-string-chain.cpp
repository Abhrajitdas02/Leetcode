class Solution {
private:
    static bool cmp(string &a, string &b){
        return a.size() < b.size();
    }

    bool check(string s1, string s2){
        if(s1.size() - s2.size() != 1)
            return false;
        int i = 0, j = 0;
        while(j != s2.size()){
            if(i == s1.size())
                return false;
            if(s1[i] == s2[j])
                i++, j++;
            else
                i++;
        }
        return true;
    }
public:
    int longestStrChain(vector<string>& words) {
        int n = words.size();
        sort(words.begin(), words.end(), cmp);
        vector<int> dp(n + 1, 1);
        int maxi = 1;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < i; j++){
                if(check(words[i], words[j]) && dp[i] < dp[j] + 1){
                    dp[i] = dp[j] + 1;
                }
                maxi = max(dp[i], maxi);
            }
        }
        return maxi;
    }
};