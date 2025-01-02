class Solution {
public:
    int solve(string &text1,string &text2,int i, int j, vector<vector<int>> &dp){
    if(i>=text1.length()|| j>=text2.length()) return 0;

    if(dp[i][j]!=-1) return dp[i][j];
    if(text1[i]==text2[j])
      dp[i][j] = 1+ solve(text1,text2,i+1,j+1,dp);
    else
     dp[i][j] = 0 + max(solve(text1,text2,i+1,j,dp), solve(text1,text2,i,j+1,dp));
     return dp[i][j];
}
    int minDistance(string word1, string word2) {
        if(word1==word2)return 0;
        int n=word1.length();
        int m=word2.length();
        vector<vector<int>> dp(n,vector<int>(m,-1));
        int a=solve(word1,word2,0,0,dp);
        return (n+m)-2*a;
    }
};