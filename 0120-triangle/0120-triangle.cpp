class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        int m=triangle.size();
        vector<vector<int>> dp(m,vector<int>(m,-1));
        int down=INT_MAX,diag=INT_MAX;
        for(int i=m-1;i>=0;i--){
            for(int j=i;j>=0;j--){
                if(i==m-1) dp[i][j]=triangle[i][j];
                else{
                    if(i<m-1) down=triangle[i][j]+dp[i+1][j];
                    else down=INT_MAX;
                    if(j<m-1) diag=triangle[i][j]+dp[i+1][j+1];
                    else diag=INT_MAX;
                    dp[i][j]=min(down,diag);
                }
            }
        }
        return dp[0][0];
    }
};