class Solution {
    private:
    int find(int n,int i,int j,vector<vector<int>>& triangle,vector<vector<int>>& dp){
        if(i==n-1) return triangle[n-1][j];
        if(dp[i][j]!=-1) return dp[i][j];
        int down=triangle[i][j]+find(n,i+1,j,triangle,dp);
        int diag=triangle[i][j]+find(n,i+1,j+1,triangle,dp);
        return dp[i][j]=min(down,diag);
    }
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        int n=triangle.size();
        vector<vector<int>> dp(n,vector<int>(n,-1));
        return find(n,0,0,triangle,dp);
    }
};