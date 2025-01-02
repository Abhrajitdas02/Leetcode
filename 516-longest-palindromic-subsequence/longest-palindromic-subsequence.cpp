class Solution {
public:
    int find(int i,int j,string& s,string& t,vector<vector<int>>& dp){
        if(i>=s.length() || j>=t.length()) return 0;
        if(dp[i][j]!=-1)return dp[i][j];

        if(s[i]==t[j])
        dp[i][j]=1+find(i+1,j+1,s,t,dp);
        else
        dp[i][j]=max(find(i+1,j,s,t,dp),find(i,j+1,s,t,dp));
        return dp[i][j];
    }
    int longestPalindromeSubseq(string s) {
        string t=s;
        reverse(s.begin(),s.end());
        int n=s.length();
        int m=t.length();
        vector<vector<int>> dp(n,vector<int>(m,-1));
        return find(0,0,s,t,dp);
    }
};