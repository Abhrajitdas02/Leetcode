class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        vector<vector<vector<int>>> dp(n+1,vector<vector<int>>(2,vector<int>(3,0)));
        // for(int i=0;i<n;i++){ // For 2 transactions atmost
        //     dp[i][0][0] = 0;
        //     dp[i][1][0] = 0;
        // }
        // for(int i=0;i<3;i++){ // For idx == prices.size() then opt->0,1 and limit->0,1,2
        //     dp[n][0][i] = 0;
        //     dp[n][1][i] = 0;
        // }
        for(int i=n-1;i>=0;i--){
            for(int j=1;j>=0;j--){
                for(int k=2;k>0;k--){
                    if(j == 0)
                        dp[i][j][k] = max(-prices[i]+dp[i+1][1][k],dp[i+1][0][k]);
                    else
                        dp[i][j][k] = max(prices[i]+dp[i+1][0][k-1],dp[i+1][1][k]);
                }
            }
        }
        return dp[0][0][2];
    }
};