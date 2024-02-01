class Solution {
// public:
    // private:
    // int find(int ind, int buy,int n, vector<vector<int>>&dp, vector<int>& prices){
    //     if(ind == n) return 0;
    //     int profit=0;
    //     if(dp[ind][buy]!=-1) return dp[ind][buy];
    //     if(buy)
    //         profit = dp[ind][buy] = max(-prices[ind] + find(ind+1,0), 0 +find(ind+1,1));
    //         else profit = dp[ind][buy] = max(0+ find(ind +1, 1), 0+find(ind+1,0));
    //     }
    //     return dp[ind][buy];
    // }
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        vector<vector<int>>dp(n+1,vector<int>(2,0));
        dp[n][0] = dp[n][1]=0;
        for(int ind=n-1;ind>=0;ind--){
           for(int buy=0; buy<=1;buy++){
        int profit=0;
        if(buy){
            profit = max(-prices[ind] + dp[ind+1][0], 0 +dp[ind+1][1]);
        }
            else 
            {
                profit = max(prices[ind] + dp[ind+1][1], 0 + dp[ind+1][0]);
        }
         dp[ind][buy]= profit;
           }
        }
        return dp[0][1];
    }
};