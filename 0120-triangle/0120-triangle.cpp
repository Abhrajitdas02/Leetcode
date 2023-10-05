// class Solution {
//     private:
//     int find(int n,int i,int j,vector<vector<int>>& triangle,vector<vector<int>>& dp){
//         if(i==n-1) return triangle[n-1][j];
//         if(dp[i][j]!=-1) return dp[i][j];
//         int down=triangle[i][j]+find(n,i+1,j,triangle,dp);
//         int diag=triangle[i][j]+find(n,i+1,j+1,triangle,dp);
//         return dp[i][j]=min(down,diag);
//     }
// public:
//     int minimumTotal(vector<vector<int>>& triangle) {
//         int n=triangle.size();
//         vector<vector<int>> dp(n,vector<int>(n,-1));
//         return find(n,0,0,triangle,dp);
//     }
// };
class Solution {
    public:
     int minimumTotal(vector<vector<int>>& triangle) {
       int n=triangle.size();
         vector<vector<int>> dp(n,vector<int>(n,0));
         for(int j=0;j<n;j++) dp[n-1][j]=triangle[n-1][j]; //base case
          for(int i=n-2;i>=0;i--){
              for(int j=i;j>=0;j--){
                 int down=triangle[i][j]+dp[i+1][j];
                 int diag=triangle[i][j]+dp[i+1][j+1];
                 dp[i][j]=min(down,diag);
             }
         }
         return dp[0][0];
     }
};