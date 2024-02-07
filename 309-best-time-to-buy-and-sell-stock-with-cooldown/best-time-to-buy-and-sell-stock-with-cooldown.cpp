class Solution {
private:
    int solveTabulation(int size, vector<int> &prices)
    {
        vector<vector<int>> dp(size+2, vector<int> (2, 0));
        
        for(int i=size-1;i>=0;i--)
        {
            for(int buy=0;buy<=1;buy++)
            {
                int profit = 0;
                if(buy)
                    profit = max( -prices[i] + dp[i+1][0],
                                    0 + dp[i+1][1] );
                else
                    //index+2 can be out of bound, so index >= size in Base case...
                        profit = max( prices[i] + dp[i+2][1],
                                    0 + dp[i+1][0] );
                
                dp[i][buy] = profit;
            }
        }

        return dp[0][1];
    }

public:
    int maxProfit(vector<int>& prices) {
        int size = prices.size();
       
        int ans = solveTabulation(size, prices);
        return ans;
    }
};