class Solution {
private:
   int find(int ind, vector<int>& coins, int amt,vector<vector<int>>& dp){
    if(ind==0){
        if(amt%coins[ind]==0) return amt/coins[ind];
        else return 1e9;
    }
    if(dp[ind][amt]!=-1) return dp[ind][amt];

    int nopick=find(ind-1,coins,amt,dp);
    int pick=INT_MAX;
    if(coins[ind]<=amt) pick=1+ find(ind,coins,amt-coins[ind],dp);

    return dp[ind][amt]= min(pick,nopick);
   }
public:
    int coinChange(vector<int>& coins, int amount) {
        int n = coins.size();
        sort(coins.begin(),coins.end());
        vector<vector<int>> dp(n,vector<int>(amount+1,-1));
        int ans=find(n-1,coins,amount,dp);
        if(ans>=1e9) return -1;
        return ans;
    }
};